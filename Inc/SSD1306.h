/*
 * SSD1306.h
 *
 *  Created on: 14 dec. 2017 year.
 *      Author: Valenti
 *      The header file for display with SSD1306 controller
 *
 *LASR REVIEW : 21.12.2017 3:47
 */

#ifndef INC_SSD1306_H_
#define INC_SSD1306_H_

/**
    * include the hal driver and i2c to extern definition the I2C handle
    * include the string.h library for using the memset(...) function
    */
#include "stm32f1xx_hal.h"
#include "stm32f1xx_hal_i2c.h"
#include <string.h>
//#include "Fonts.h"
#include "FontInfo.h"

#define SSD1306_WIDTH	128
#define SSD1306_HEIGHT	64

/**
    * System definitions and variables
    * SSD1306_DISP_SIZE - define the SSD1306 displzy size in pixels
    * extern I2C_HandleTypeDef hi2c1 define the used I2C wire
    * dispBuffer- buffer for sending via I2C in ssd1306_updateScreen() function
    */
#define SSD1306_DISP_SIZE SSD1306_WIDTH * SSD1306_HEIGHT / 8 + 1

extern I2C_HandleTypeDef hi2c1;

static uint8_t SSD1306_dispBuffer[ SSD1306_DISP_SIZE ] , * SSD1306_pDispBuffer  = SSD1306_dispBuffer;


/**
    * Enum SSD1306_Colors.
    * Consist a two possible colors
    */
typedef enum
{
	SSD1306_BLACK = 0x00,
	SSD1306_WHITE = 0x01
} SSD1306_Colors;


/**
    * Enum SSD1306_rotationType.
    * Consist a possibly rotations
    */
typedef enum
{
	rightHorizontal 	= 0x26,
	leftHorizontal 		= 0x27,
	continuousVertical	= 0x29,
	continuousHorizontal= 0x2A
} SSD1306_rotationType;
/**
 * Enum SSD1306_rotationSpeed.
 * Consist a frame frequency for hardware rotation
*/
typedef enum
{
	frames_2 	= 0x07,
	frames_3 	= 0x04,
	frames_4 	= 0x05,
	frames_5  	= 0x00,
	frames_25 	= 0x06,
	frames_64 	= 0x01,
	frames_128 	= 0x02,
	frames_256 	= 0x03,
} SSD1306_rotationSpeed;

/**
    *Display driver commands definitions
    */
#define SSD1306_I2C_ADDR							0x78

#define SSD1306_I2C_CMD_MODE						0x80
#define SSD1306_I2C_DATA_MODE 						0xC0
#define SSD1306_I2C_MULTIBYTE_DATA_MODE				0x40

#define SSD1306_SET_LOWER_COLUMN_START_ADRESS 		0x00
#define SSD1306_SET_HIGHER_COLUMN_START_ADRESS		0x10

/**
    * Can be various:
    * 00,Horizontal Addressing Mode;
    * 01,Vertical Addressing Mode;
    * 10,Page Addressing Mode (RESET);
    * 11,Invalid
    */
#define SSD1306_SET_MEMORY_ADRESSING_MODE 			0x20


#define SSD1306_SET_COLUMN_ADRESS					0x21
#define SSD1306_SET_PAGE_ADRESS						0x22


/**
    *Pure configuration commands
    */
#define SDD1306_SET_DISPLAY_OFF						0xAE
#define SSD1306_SET_DISPLAY_CLOCK_DIVIDE_RATIO 		0xD5
#define SSD1306_SET_DISPLAY_OSCILLATOR_FREQ 		0x80

#define SSD1306_SET_MULTIPLEX_RATIO 				0xA8
#define SSD1306_SET_AFTER_MULTIPLEX_RATIO 			0x3F

#define SSD1306_SET_DISP_OFFSET 					0xD3
#define SSD1306_SET_AFTER_DISPLAY_OFFSET 			0x00

#define SSD1306_SET_START_LINE 						0x40

#define SSD1306_SET_CHARGE_PUMP 					0x8D
#define SSD1306_SET_VCC_EXTERNALLY 					0x10
#define SSD1306_SET_VCC_INTERNAL_DC 				0x14

#define SSD1306_SET_SEGMENT_REMAP 					0xA1

#define SSD1306_SET_COM_DIRECION 					0xC8

#define SSD1306_SET_COM_HARDWARE_CONF_1 			0xDA
#define SSD1306_SET_COM_HARDWARE_CONF_2 			0x12

#define SSD1306_SET_CONTRAST_CTRL 					0x81
#define SSD1306_SET_CONTRAST_CTRL_VCC_EXTERNAL 		0x9F
#define SSD1306_SET_CONTRAST_CTRL_VCC_INTERNAL 		0xCF

#define SSD1306_SET_PRECHARGE_PERIOD 				0xD9
#define SSD1306_SET_PRECHARGE_PREIOD_VCC_EXTERNAL	0x22
#define SSD1306_SET_PRECHARGE_PREIOD_VCC_INTERNAL	0xF1

#define SSD1306_SET_VCOMH_DESELECT_LEVEL_1 			0xDB
#define SSD1306_SET_VCOMH_DESELECT_LEVEL_2 			0x40

#define SSD1306_SET_ENTIRE_DISPLAY_ON_OFF 			0xA4

#define SSD1306_SET_NORMAL_DISPLAY					0xA6
#define SSD1306_SET_IVERSE_DISPLAY					0xA7
#define SSD1306_SET_DISPLAY_ON 						0xAF

#define SSD1306_SET_PAGE_START_ADRESS				0xB0
#define SSD1306_DEACTIVATE_SCROLL					0x2E
#define SSD1306_ACTIVATE_SCROLL						0x2F

/**
    *Write one byte to SSD1306 via I2C
    *_writeMode - can be CMD_MODE, DATA_MODE , MULTIBYTE_DATA_MODE
    *_data - data which will be write
    */
void ssd1306_writeByte( uint8_t _writeMode 	,
						uint8_t _data 		);

/**
    *Write command to SSD1306 via I2C
    *_command  - command which will be write
    */
void ssd1306_writeCommand( uint8_t _command );

/**
    *Initialization procedure
    */
void ssd1306_initDisplay( void );


/**
    *Send the SSD1306_dispBuffer via I2C after set the first bit of array to MULTIBYTE_DATA_MODE
    */
void ssd1306_updateScreen( void );


/**
    *Fill the SSD1306_dispBuffer one of colors
    *_fillColor - one color from   SSD1306_Colors enum
    *need call ssd1306_updateScreen() after call
    */
void ssd1306_fill( SSD1306_Colors  _fillColor );

/**
    *Fill the SSD1306_dispBuffer with picture
    *_picture - pointer to picture array
    *_pictureSize = pictureWidth* pictureHeight
    *need call ssd1306_updateScreen() after call
    */
void ssd1306_sendPicture( uint8_t * _picture,
						 int _pictureSize );


/**
    *Set the  scroll type - continuous or Short
    *_rotationType- watch the enum SSD13206_rotationType
    *_rotationSpeed - set up the rotation speed from  SSD1306_rotationSpeed enum
    *_rotationOffset -set up the rotion offset
    *_startPage - start page adress in display
    *_endPage - end page adress in display
    */
void ssd1306_makeContinuousScroll( SSD1306_rotationType _rotationType	,
								   SSD1306_rotationSpeed _rotationSpeed	,
								   uint8_t _rotationOffset				,
								   uint8_t _startPage					,
								   uint8_t _endPage 					);

void ssd1306_makeShortScroll( SSD1306_rotationType _rotationType	,
							  SSD1306_rotationSpeed _rotationSpeed	,
							  uint8_t _startPage					,
							  uint8_t _endPage 						);

void ssd1306_setPixel(	uint8_t _xCoord			,
						uint8_t _yCoord		  	,
						SSD1306_Colors _color 	);

void ssd1306_activateScroll( void );

void ssd1306_deActivateScroll( void );

void ssd1306_displayOn( void );

void ssd1306_displayOff( void );

char SSD1306_Putc( char _char			  	,
				   const FontInfo_t * _font	,
				   SSD1306_Colors _color	);

char SSD1306_Puts( char* _string			,
				   const FontInfo_t * _font	,
				   SSD1306_Colors _color	);
#endif /* INC_SSD1306_H_ */
