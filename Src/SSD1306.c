/*
 * SSD1306.c
 *
 *  Created on: 14 дек. 2017 г.
 *      Author: Valenti
 */

#include "SSD1306.h"



void ssd1306_writeByte(  uint8_t _writeMode, uint8_t _data )
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

void ssd1306_sendPicture( uint8_t * _picture ,int _pictureSize )
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

void ssd1306_makeRotation(SSD1306_rotationType _rotationType ,  SSD1306_rotationSpeed _rotationSpeed )
{
	ssd1306_writeCommand( _rotationType );
	ssd1306_writeCommand( 0x00 );
	ssd1306_writeCommand( 0x00 );//Need fix - it`s start adress on page
	ssd1306_writeCommand( _rotationSpeed );
	ssd1306_writeCommand( 0x07 );
	ssd1306_writeCommand( 0x01 );
	ssd1306_writeCommand( 0x2F );
}
