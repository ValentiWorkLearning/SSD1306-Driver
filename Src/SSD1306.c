/*
 * SSD1306.c
 *
 *  Created on: 14 дек. 2017 г.
 *      Author: Valenti
 */

#include "SSD1306.h"

typedef struct {
	uint16_t CurrentX;
	uint16_t CurrentY;
	uint8_t Inverted;
	uint8_t Initialized;
} SSD1306_t;

static SSD1306_t SSD1306;

void ssd1306_writeByte(  uint8_t _writeMode
					   , uint8_t _data )
{
	uint8_t l_sendArray[2] = { _writeMode ,_data };

	HAL_I2C_Master_Transmit( &hi2c1 ,SSD1306_I2C_ADDR ,l_sendArray, 2, HAL_MAX_DELAY );
}

void ssd1306_writeCommand( uint8_t _command )
{
	ssd1306_writeByte(SSD1306_I2C_CMD_MODE,_command);
}

void ssd1306_updateScreen( void )
{
	SSD1306_pDispBuffer[0] = SSD1306_I2C_MULTIBYTE_DATA_MODE;
	HAL_I2C_Master_Transmit(&hi2c1 , SSD1306_I2C_ADDR , SSD1306_pDispBuffer, SSD1306_DISP_SIZE  ,1000);

}

void ssd1306_fill( SSD1306_Colors  _fillColor )
{
/* Set memory */
	memset(SSD1306_pDispBuffer, ( _fillColor == SSD1306_BLACK ) ? 0x00 : 0xFF, SSD1306_DISP_SIZE );
}

void ssd1306_sendPicture( uint8_t * _picture
						, int _pictureSize )
{
	memcpy( SSD1306_pDispBuffer + 1, _picture, _pictureSize );
}

void ssd1306_initDisplay( void )
{
	ssd1306_writeCommand( SDD1306_SET_DISPLAY_OFF					);
	ssd1306_writeCommand( SSD1306_SET_DISPLAY_CLOCK_DIVIDE_RATIO 	);
	ssd1306_writeCommand( SSD1306_SET_DISPLAY_OSCILLATOR_FREQ 		);
	ssd1306_writeCommand( SSD1306_SET_MULTIPLEX_RATIO 				);
	ssd1306_writeCommand( SSD1306_SET_AFTER_MULTIPLEX_RATIO 		);
	ssd1306_writeCommand( SSD1306_SET_DISP_OFFSET 					);
	ssd1306_writeCommand( SSD1306_SET_AFTER_DISPLAY_OFFSET 			);
	ssd1306_writeCommand( SSD1306_SET_START_LINE 					);
	ssd1306_writeCommand( SSD1306_SET_CHARGE_PUMP 					);
	ssd1306_writeCommand( SSD1306_SET_VCC_INTERNAL_DC 				);
	ssd1306_writeCommand( SSD1306_SET_SEGMENT_REMAP 				);
	ssd1306_writeCommand( SSD1306_SET_COM_DIRECION 					);
	ssd1306_writeCommand( SSD1306_SET_COM_HARDWARE_CONF_1 			);
	ssd1306_writeCommand( SSD1306_SET_COM_HARDWARE_CONF_2 			);
	ssd1306_writeCommand( SSD1306_SET_CONTRAST_CTRL 				);
	ssd1306_writeCommand( SSD1306_SET_CONTRAST_CTRL_VCC_INTERNAL 	);
	ssd1306_writeCommand( SSD1306_SET_PRECHARGE_PERIOD 				);
	ssd1306_writeCommand( SSD1306_SET_PRECHARGE_PREIOD_VCC_INTERNAL );
	ssd1306_writeCommand( SSD1306_SET_VCOMH_DESELECT_LEVEL_1 		);
	ssd1306_writeCommand( SSD1306_SET_VCOMH_DESELECT_LEVEL_2 		);
	ssd1306_writeCommand( SSD1306_SET_ENTIRE_DISPLAY_ON_OFF 		);
	ssd1306_writeCommand( SSD1306_SET_NORMAL_DISPLAY		 		);
	ssd1306_writeCommand( SSD1306_SET_LOWER_COLUMN_START_ADRESS		);
	ssd1306_writeCommand( SSD1306_SET_HIGHER_COLUMN_START_ADRESS	);
	ssd1306_writeCommand( SSD1306_SET_MEMORY_ADRESSING_MODE			);
	ssd1306_writeCommand( SSD1306_SET_PAGE_START_ADRESS				);
	ssd1306_writeCommand( SSD1306_DEACTIVATE_SCROLL					);
	ssd1306_writeCommand( SSD1306_SET_DISPLAY_ON					);
	ssd1306_fill(SSD1306_BLACK);
	ssd1306_updateScreen();
}

void ssd1306_makeContinuousScroll( SSD1306_rotationType _rotationType
								   ,	SSD1306_rotationSpeed _rotationSpeed
								   , 	uint8_t _rotationOffset
								   , 	uint8_t _startPage
								   , 	uint8_t _endPage
								  )
{
	ssd1306_writeCommand( _rotationType );
	ssd1306_writeCommand( 0x00 );
	ssd1306_writeCommand( _startPage );
	ssd1306_writeCommand( _rotationSpeed );
	ssd1306_writeCommand( _endPage );
	ssd1306_writeCommand( _rotationOffset );
	ssd1306_activateScroll();
}

void ssd1306_makeShortScroll(	SSD1306_rotationType _rotationType
								,	SSD1306_rotationSpeed _rotationSpeed
								,	uint8_t _startPage
								,	uint8_t _endPage )
{
	ssd1306_writeCommand( _rotationType );
	ssd1306_writeCommand( 0x00 );
	ssd1306_writeCommand( _startPage );
	ssd1306_writeCommand( _rotationSpeed );
	ssd1306_writeCommand( _endPage );
	ssd1306_activateScroll();

}

void ssd1306_setPixel(  uint8_t _xCoord
					 ,  uint8_t _yCoord
					 ,  SSD1306_Colors _color
					 )
{

	if (_color == SSD1306_BLACK )
	{
		SSD1306_pDispBuffer[ _xCoord+(_yCoord / 8) * SSD1306_WIDTH ] &=~( 1 <<( _yCoord % 8 ) );
	}
	else
	{
		SSD1306_pDispBuffer[ _xCoord+(_yCoord / 8) * SSD1306_WIDTH ] |= ( 1<< ( _yCoord % 8 ) );
	}
}

void ssd1306_activateScroll( void )
{
	ssd1306_writeCommand( SSD1306_ACTIVATE_SCROLL );
}

void ssd1306_deActivateScroll( void )


{
	ssd1306_writeCommand( SSD1306_DEACTIVATE_SCROLL );
}

//TO DO - Imlplement structure to return runtime errors
//TO DO - Implement the correct processing fonts with symbol width >10( two bytes for each pixel row)

char SSD1306_Putc(char _char, const FontInfo_t* _fontInfo, SSD1306_Colors _color)
{
	uint16_t l_charIndex = _char-33;
	uint16_t l_rowByte = 0;

	if(_char == ' ')
	{
		for(int i = 0; i < _fontInfo -> m_spaceWidth; i++)
		{
			ssd1306_setPixel(SSD1306.CurrentX + i, SSD1306.CurrentY, !_color);
		}
		return 0x20;
	}

	for( int i = 0; i < _fontInfo->m_charHeight;  i++ )
	{
		l_rowByte = _fontInfo -> m_charBitmap[ _fontInfo->m_fontDescriptor[ l_charIndex ].m_charOffset + i ];

		for( int j = 0; j < _fontInfo->m_fontDescriptor[ l_charIndex ].m_charWidth; j++ )
		{

			if( ( l_rowByte << j ) & 0x80 )
			{
				ssd1306_setPixel( SSD1306.CurrentX + j, ( SSD1306.CurrentY + i ), _color );

			}
			else
			{
				ssd1306_setPixel( SSD1306.CurrentX + j, ( SSD1306.CurrentY + i ), !_color );
			}

		}
	}

	SSD1306.CurrentX += _fontInfo->m_fontDescriptor[l_charIndex].m_charWidth + 2 * _fontInfo->m_spaceWidth;
	return _char;
}


//TO DO - Imlplement structure to return runtime errors
char SSD1306_Puts(char* _string, const FontInfo_t* _fontInfo, SSD1306_Colors color)
{
	while ( * _string )
	{
		if (SSD1306_Putc( * _string , _fontInfo , color ) != *_string )
		{
			return * _string;
		}
		_string ++;
	}
	return * _string;
}
