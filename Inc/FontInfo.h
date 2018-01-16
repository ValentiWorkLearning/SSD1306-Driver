/*
 * FontInfo.h
 *
 *  Created on: 13 џэт. 2018 у.
 *      Author: Valenti
 */

#ifndef INC_FONTINFO_H_
#define INC_FONTINFO_H_

#include "stdint.h"

typedef struct
{
	uint16_t m_charWidth;
	uint16_t m_charOffset;

} FontCharInfo_t;

typedef struct
{
		uint8_t m_charHeight;
		char  	m_startChar;
		char  	m_endChar;
		uint8_t m_spaceWidth;
const 	FontCharInfo_t * m_fontDescriptor;
const 	uint8_t * m_charBitmap;

} FontInfo_t;


#endif /* INC_FONTINFO_H_ */
