/*
 * pictures.h
 *
 *  Created on: 21 ���. 2017 �.
 *      Author: Valenti
 */

#ifndef INC_PICTURES_H_
#define INC_PICTURES_H_

#define imageWidth 64
#define imageHeight 64

uint8_t AdafruitLogo [] =
{
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
		0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x80, 0x80, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xFC, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80,
		0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0xFF,
		0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00,
		0x80, 0xFF, 0xFF, 0x80, 0x80, 0x00, 0x80, 0x80, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x80, 0x80,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x8C, 0x8E, 0x84, 0x00, 0x00, 0x80, 0xF8,
		0xF8, 0xF8, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xE0, 0xE0, 0xC0, 0x80,
		0x00, 0xE0, 0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFF, 0xC7, 0x01, 0x01,
		0x01, 0x01, 0x83, 0xFF, 0xFF, 0x00, 0x00, 0x7C, 0xFE, 0xC7, 0x01, 0x01, 0x01, 0x01, 0x83, 0xFF,
		0xFF, 0xFF, 0x00, 0x38, 0xFE, 0xC7, 0x83, 0x01, 0x01, 0x01, 0x83, 0xC7, 0xFF, 0xFF, 0x00, 0x00,
		0x01, 0xFF, 0xFF, 0x01, 0x01, 0x00, 0xFF, 0xFF, 0x07, 0x01, 0x01, 0x01, 0x00, 0x00, 0x7F, 0xFF,
		0x80, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0xFF,
		0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x03, 0x0F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xC7, 0xC7, 0x8F,
		0x8F, 0x9F, 0xBF, 0xFF, 0xFF, 0xC3, 0xC0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFC, 0xFC,
		0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xF8, 0xF8, 0xF0, 0xF0, 0xE0, 0xC0, 0x00, 0x01, 0x03, 0x03, 0x03,
		0x03, 0x03, 0x01, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01,
		0x03, 0x01, 0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x03, 0x03, 0x01, 0x01, 0x03, 0x03, 0x00, 0x00,
		0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
		0x03, 0x03, 0x03, 0x03, 0x03, 0x01, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x03,
		0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x1F, 0x0F,
		0x87, 0xC7, 0xF7, 0xFF, 0xFF, 0x1F, 0x1F, 0x3D, 0xFC, 0xF8, 0xF8, 0xF8, 0xF8, 0x7C, 0x7D, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x0F, 0x07, 0x00, 0x30, 0x30, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xC0, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0xC0, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x1F,
		0x0F, 0x07, 0x1F, 0x7F, 0xFF, 0xFF, 0xF8, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xF8, 0xE0,
		0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00,
		0x00, 0xFC, 0xFE, 0xFC, 0x0C, 0x06, 0x06, 0x0E, 0xFC, 0xF8, 0x00, 0x00, 0xF0, 0xF8, 0x1C, 0x0E,
		0x06, 0x06, 0x06, 0x0C, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0xFC,
		0xFE, 0xFC, 0x00, 0x18, 0x3C, 0x7E, 0x66, 0xE6, 0xCE, 0x84, 0x00, 0x00, 0x06, 0xFF, 0xFF, 0x06,
		0x06, 0xFC, 0xFE, 0xFC, 0x0C, 0x06, 0x06, 0x06, 0x00, 0x00, 0xFE, 0xFE, 0x00, 0x00, 0xC0, 0xF8,
		0xFC, 0x4E, 0x46, 0x46, 0x46, 0x4E, 0x7C, 0x78, 0x40, 0x18, 0x3C, 0x76, 0xE6, 0xCE, 0xCC, 0x80,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x0F, 0x1F, 0x1F, 0x3F, 0x3F, 0x3F, 0x3F, 0x1F, 0x0F, 0x03,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00,
		0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x03, 0x07, 0x0E, 0x0C,
		0x18, 0x18, 0x0C, 0x06, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x01, 0x0F, 0x0E, 0x0C, 0x18, 0x0C, 0x0F,
		0x07, 0x01, 0x00, 0x04, 0x0E, 0x0C, 0x18, 0x0C, 0x0F, 0x07, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00,
		0x00, 0x0F, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x07,
		0x07, 0x0C, 0x0C, 0x18, 0x1C, 0x0C, 0x06, 0x06, 0x00, 0x04, 0x0E, 0x0C, 0x18, 0x0C, 0x0F, 0x07,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

uint8_t secondD_tyan[] = {
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0x8F,
		0x6F, 0xCF, 0x5F, 0x8F, 0xFB, 0xF5, 0x5B, 0xDB, 0xD5, 0xDB,
		0x37, 0xEF, 0xBF, 0xCF, 0xF7, 0xFB, 0x7F, 0x3F, 0xBF, 0xDF,
		0xFF, 0xEF, 0xFF, 0xEF, 0xE7, 0xE5, 0xF7, 0xF7, 0x73, 0xDB,
		0xEB, 0xFB, 0xF9, 0x79, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD, 0xFD,
		0xFD, 0xFD, 0xFD, 0xF9, 0xFD, 0xFD, 0xFD, 0xF8, 0xFB, 0xFB,
		0xFE, 0xF6, 0xC5, 0xFF, 0xFB, 0xFB, 0xFB, 0xF3, 0xF7, 0xF7,
		0xEE, 0xEF, 0xDD, 0xD0, 0xB1, 0x22, 0xED, 0xC7, 0x9F, 0xBF,
		0x7F, 0x9F, 0xEF, 0x77, 0xBB, 0xD3, 0xDD, 0x5B, 0xD3, 0x7F,
		0xFB, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xFF, 0xDB,
		0xFB, 0xBF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFB, 0xF7, 0xF7,
		0xEF, 0x9F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xF3, 0xEF, 0xDE, 0xBE,
		0xF2, 0x68, 0x2F, 0x9F, 0x38, 0x77, 0x4F, 0x9F, 0xCE, 0x8D,
		0x1F, 0xA1, 0xF6, 0xF6, 0xFC, 0xFD, 0xFE, 0xFF, 0xFF, 0x7F,
		0xFF, 0xFF, 0xFF, 0xBF, 0xEF, 0xF9, 0xFF, 0xDF, 0xF7, 0xFF,
		0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0x7F, 0x3F, 0xDF, 0xEF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0x7E, 0xFC, 0xFB, 0xFF, 0x7F, 0xFF, 0xE7, 0xCF, 0xBF,
		0xFE, 0xFF, 0x0F, 0xFF, 0xFF, 0xFE, 0xFD, 0xFE, 0xFE, 0xF7,
		0xD4, 0xA7, 0x2F, 0xB7, 0xAB, 0xD4, 0xEF, 0xC7, 0xFB, 0xFC,
		0xDD, 0xDD, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xDE, 0xDE, 0xBE, 0x3F, 0xFF, 0xFF, 0xFE, 0xFC,
		0xFD, 0xFF, 0xFF, 0xFB, 0x7B, 0xB7, 0xC7, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0xEF, 0xB1,
		0xCB, 0x20, 0xC0, 0x32, 0x00, 0x80, 0xE2, 0xDF, 0x3C, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xE7, 0x9F,
		0x1D, 0x1D, 0x5D, 0xCD, 0xE8, 0x0E, 0x8E, 0x0E, 0x0E, 0x0E,
		0x0E, 0x5E, 0x4C, 0xFE, 0xF6, 0xBB, 0xF9, 0xFC, 0xEE, 0xF7,
		0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xF7, 0x9C, 0x1E,
		0x0E, 0x0E, 0x0E, 0x4E, 0x6A, 0xCE, 0x0E, 0x9E, 0x5D, 0xCF,
		0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0x60,
		0x55, 0xCA, 0xD5, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xDF, 0xDF, 0xFF, 0xEF, 0xCF, 0xD7, 0xF7, 0xEF,
		0xEB, 0xFF, 0xF5, 0x76, 0xBF, 0xFB, 0xFB, 0x3F, 0xFD, 0xFF,
		0xFE, 0x7F, 0xBF, 0xFF, 0x7F, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0xDF, 0xE7, 0x3B, 0x0E, 0x83,
		0xF0, 0x00, 0x06, 0x7F, 0xFF, 0xFF, 0xFF, 0x10, 0x01, 0x0B,
		0x07, 0xEF, 0xFF, 0xFF, 0xFF, 0x1F, 0xBF, 0x7F, 0xBB, 0xFF,
		0x76, 0xFE, 0xFF, 0xFE, 0xFE, 0xFD, 0xFF, 0xFF, 0xFD, 0xFE,
		0xFF, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0xBF, 0xFF, 0xFF, 0xBF,
		0xBF, 0xBF, 0x3F, 0xBF, 0xFF, 0xFF, 0xFE, 0xFD, 0xFF, 0xFF,
		0xFD, 0xFE, 0xFF, 0xFE, 0x3F, 0xB7, 0xFB, 0xFF, 0xBF, 0xFF,
		0x0F, 0xFF, 0xEF, 0x07, 0xE1, 0x00, 0x00, 0x03, 0x7F, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x6F, 0xBF, 0xE7, 0xFF,
		0x7F, 0xBF, 0xDF, 0xEF, 0xFF, 0xF7, 0x77, 0xBF, 0xDF, 0xE7,
		0xFF, 0xFD, 0xFF, 0xFF, 0xFF, 0xFD, 0xFD, 0xFE, 0xFF, 0xFC,
		0xFD, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xCF, 0x77,
		0x99, 0xEE, 0xFF, 0x0F, 0xFF, 0x98, 0xE0, 0xE3, 0xEF, 0xFF,
		0xF0, 0xC0, 0xE1, 0x07, 0xEF, 0xE0, 0xF8, 0xC0, 0xFF, 0xFF,
		0x1F, 0x3F, 0x77, 0xEF, 0xDD, 0xFE, 0xB1, 0xE7, 0x5F, 0x3E,
		0x00, 0x81, 0x9D, 0xCF, 0x83, 0xB3, 0x8F, 0x2F, 0x7F, 0x5F,
		0x5F, 0x1F, 0x5E, 0x5F, 0x1F, 0x3F, 0x9F, 0x1F, 0x4F, 0x9F,
		0x0E, 0x87, 0xB7, 0x07, 0x6B, 0x03, 0xFF, 0xCF, 0x7F, 0xFF,
		0xFF, 0xFF, 0xFC, 0xFF, 0xFF, 0x9F, 0xE3, 0xFF, 0xE0, 0xFF,
		0xF1, 0xFF, 0xFF, 0xF0, 0xF0, 0xE0, 0xDC, 0xBF, 0x7F, 0xFF,
		0xFF, 0xFD, 0x3F, 0xBD, 0xFF, 0xCF, 0xD3, 0xAC, 0x6F, 0xF7,
		0xFB, 0xFF, 0xFD, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0x03, 0xFC, 0x03, 0x7C, 0x80, 0xBF, 0x2B,
		0x9E, 0xEE, 0xF6, 0xFB, 0xFD, 0xFF, 0xFF, 0xFE, 0xFE, 0xFF,
		0xFE, 0xFE, 0xFD, 0xFB, 0xFD, 0xFF, 0x7E, 0xFF, 0xD7, 0xFF,
		0xFF, 0xFE, 0xFF, 0xFF, 0xFB, 0xFB, 0x73, 0x63, 0xE6, 0xFE,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xB7, 0xBF,
		0xBF, 0x9F, 0x7F, 0x5B, 0xFF, 0xFF, 0xF7, 0xF7, 0xFB, 0xDF,
		0xDF, 0xFB, 0xB7, 0xFE, 0xFE, 0xFC, 0xFD, 0xFD, 0xFB, 0xF7,
		0xCF, 0xFF, 0xFF, 0xFF, 0xF7, 0xDF, 0x7F, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xFF, 0x77,
		0x9F, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFE, 0xFD, 0xFF, 0xFC, 0xFD, 0xFE, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFC, 0xFE, 0xFD, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFD, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFC, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD,
		0xFC, 0xFD, 0xFF, 0xFD, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFD,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF
    };

uint8_t fallout_Shelter[] =
{
		0xFF, 0xFE, 0xFE, 0xFF, 0xFF, 0xFE, 0xBE, 0x87, 0x76, 0xE3,
		0xF3, 0xFC, 0x7F, 0x9F, 0xCF, 0xFE, 0xFE, 0xEF, 0xEF, 0xC7,
		0xC7, 0x73, 0x78, 0xF8, 0xFF, 0xFF, 0xFF, 0x3F, 0x33, 0x33,
		0x7F, 0xFF, 0x79, 0x79, 0xF8, 0xC0, 0xC0, 0xC0, 0xC0, 0xC4,
		0xC7, 0xC7, 0xCF, 0x4F, 0xCF, 0xFF, 0xFF, 0xFD, 0x38, 0xDE,
		0x43, 0x02, 0xED, 0xE3, 0x6B, 0xA5, 0x2C, 0xF6, 0xFA, 0xEE,
		0x5F, 0x7F, 0x2E, 0x15, 0x34, 0x28, 0x34, 0x9C, 0xCA, 0xE7,
		0xE7, 0xE7, 0xE6, 0xC9, 0xDA, 0x93, 0x9F, 0xAD, 0x3B, 0x27,
		0x4E, 0xCE, 0xF3, 0xF1, 0x4C, 0x0E, 0xA6, 0xA7, 0xE2, 0x00,
		0x01, 0x03, 0x7F, 0x7F, 0xFE, 0xFC, 0xFF, 0xEF, 0xEF, 0xFF,
		0xCD, 0xC3, 0xC3, 0xED, 0xF9, 0xBF, 0x9E, 0x9E, 0xFF, 0x7F,
		0x7F, 0x7C, 0x9F, 0x9F, 0x3F, 0x38, 0xFC, 0xF8, 0xF0, 0xE3,
		0x7F, 0x6F, 0x4F, 0xFF, 0xFF, 0xF8, 0x99, 0x83, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFC, 0xFE, 0x7E, 0x3F,
		0x1F, 0x1F, 0x9F, 0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF,
		0xE7, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE6, 0xFE, 0xFE,
		0x73, 0x37, 0x16, 0x84, 0x80, 0x80, 0x13, 0x3B, 0x19, 0x39,
		0x71, 0x67, 0x0F, 0x1F, 0x9F, 0x9F, 0x2B, 0xFF, 0x42, 0x01,
		0x7C, 0xF8, 0xF8, 0xFB, 0xFB, 0x79, 0xBD, 0xDE, 0xCE, 0xEF,
		0xEF, 0xEF, 0xDF, 0xDF, 0xCF, 0xEF, 0xEF, 0xE7, 0xE7, 0xE7,
		0xCF, 0x9F, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0x9F, 0xBE, 0x3C,
		0x7B, 0xF3, 0xE7, 0x8F, 0x14, 0x51, 0xC0, 0xF0, 0x70, 0xFE,
		0xEF, 0x0E, 0x1F, 0x1F, 0xBF, 0xB3, 0xF7, 0xF0, 0xDE, 0xC2,
		0xCF, 0x4F, 0x07, 0x87, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xF0,
		0x03, 0x83, 0x9F, 0x0E, 0xBE, 0xFE, 0xFF, 0xFB, 0x78, 0x38,
		0x9F, 0x9F, 0x83, 0x93, 0xB3, 0xB2, 0xFF, 0xFF, 0xF0, 0xE1,
		0xFD, 0xFF, 0xFF, 0xE3, 0xFF, 0xFF, 0x0F, 0x0F, 0x07, 0x46,
		0xE6, 0xE7, 0x8E, 0x8F, 0x9F, 0x9E, 0xE6, 0x63, 0x07, 0x07,
		0x26, 0x9C, 0xE7, 0x6A, 0x4C, 0xA6, 0xCB, 0xC9, 0xE4, 0xF1,
		0xE4, 0xE7, 0xDF, 0xDD, 0xBE, 0x62, 0xD0, 0x71, 0x31, 0x29,
		0x9B, 0x90, 0xDC, 0xD9, 0xDF, 0xEF, 0x70, 0x07, 0xE7, 0xFA,
		0xFC, 0x3E, 0x1E, 0x3D, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xBF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xBF, 0x3F, 0x3D, 0x39, 0x7B, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x57, 0x57, 0xAB, 0x58, 0xBE,
		0x7F, 0xFF, 0x3E, 0x00, 0xE0, 0xEF, 0xE8, 0xD2, 0xB9, 0x03,
		0x56, 0x8D, 0x03, 0xF3, 0x7F, 0x3C, 0xFF, 0xE3, 0xC3, 0x47,
		0x0E, 0x3E, 0x3E, 0x1E, 0x1E, 0xB9, 0xF9, 0x78, 0x3E, 0xF8,
		0xF8, 0x1C, 0x1F, 0x1F, 0x7F, 0xFF, 0xE0, 0xF0, 0xF0, 0xF0,
		0xF8, 0xDC, 0x9F, 0xBB, 0xB7, 0xFF, 0xFF, 0x7E, 0xFC, 0xFC,
		0xFF, 0xCF, 0x9D, 0x26, 0x51, 0xBE, 0xFC, 0x19, 0x05, 0xF3,
		0xF8, 0xFD, 0xFD, 0xFD, 0xFD, 0x01, 0xC2, 0x37, 0x73, 0xF9,
		0xFC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0x87, 0x00, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF,
		0xFE, 0xFF, 0xFF, 0xE3, 0xC1, 0xDC, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0x3F, 0x7F, 0x7F, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xF5, 0xED, 0xFA, 0xFD, 0xE2, 0x00, 0x11,
		0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE,
		0xFD, 0xFA, 0xF3, 0xE7, 0x1D, 0x7A, 0x0A, 0x15, 0x1F, 0xFF,
		0xFF, 0xEE, 0xC4, 0x02, 0xFF, 0xDF, 0xFF, 0xFF, 0xFF, 0xF0,
		0xF0, 0x1C, 0x0F, 0x07, 0x19, 0x19, 0x30, 0xF0, 0xE0, 0x67,
		0x67, 0xE7, 0xF7, 0x96, 0x97, 0xC6, 0xF9, 0x1D, 0xE4, 0x30,
		0x14, 0xDF, 0xCD, 0xEF, 0xE9, 0xEE, 0xE8, 0xE7, 0xEF, 0xDF,
		0xDF, 0xDF, 0xBE, 0x38, 0x72, 0xE6, 0xEF, 0xC5, 0x0B, 0x67,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xF8, 0xE1, 0x87, 0x1E, 0x38, 0x7E, 0xFA, 0xFA,
		0xF7, 0xF7, 0xD7, 0xD7, 0xD7, 0xF6, 0xF6, 0xF6, 0xFA, 0xFB,
		0xFF, 0xFD, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0x7F, 0x3F, 0x1F,
		0x4F, 0x67, 0xF7, 0xF3, 0xF3, 0xF9, 0xF8, 0xFE, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xD7, 0x0B,
		0x3D, 0xD4, 0xD1, 0x71, 0xF2, 0xE9, 0xE1, 0xEB, 0x8F, 0x0F,
		0xFF, 0xFF, 0x7E, 0x7E, 0xFF, 0x7F, 0x3F, 0x3F, 0x80, 0x80,
		0x00, 0x00, 0x30, 0x30, 0xB0, 0xF0, 0xD0, 0xC0, 0x80, 0x98,
		0x25, 0xBD, 0xDA, 0x5E, 0x0D, 0x8D, 0xF7, 0x8C, 0x80, 0x33,
		0x7B, 0x7B, 0x7B, 0x7B, 0x7B, 0x7B, 0x7B, 0x7B, 0x7B, 0xF7,
		0xF7, 0xE7, 0x48, 0x1D, 0xFF, 0xFF, 0x1F, 0x00, 0xF0, 0xE0,
		0x04, 0x24, 0x15, 0x59, 0x09, 0xA1, 0x19, 0xEB, 0x9B, 0x3B,
		0xDB, 0xDB, 0x9B, 0xDB, 0x9B, 0x1B, 0x9B, 0x8B, 0x99, 0xC9,
		0xB9, 0xC9, 0x89, 0x0D, 0x3D, 0x6C, 0x80, 0x39, 0xFB, 0xFB,
		0xF7, 0xE7, 0xC7, 0xCF, 0xCF, 0x8F, 0x8F, 0x9F, 0xDF, 0xDF,
		0xDF, 0xCF, 0xED, 0xE6, 0xF2, 0xF8, 0xFE, 0x7F, 0x3F, 0x9F,
		0xC6, 0xE0, 0xD8, 0x75, 0x01, 0x99, 0x53, 0x93, 0xA7, 0x67,
		0x4F, 0x5F, 0x9F, 0xBF, 0x3F, 0x7F, 0xFF, 0xFF, 0xFC, 0xE3,
		0xEF, 0xE2, 0xF9, 0xD0, 0xC1, 0xD7, 0xCF, 0xA3, 0xB3, 0x7D,
		0x4A, 0x3E, 0x67, 0x7F, 0xFE, 0xFE, 0xFF, 0xFF, 0xFE, 0x7E,
		0xF1, 0xF9, 0xFF, 0xFF, 0xFF, 0xE1, 0xF1, 0xFF, 0xFF, 0xFB,
		0xFF, 0xFF, 0xFF, 0x1E, 0x0E, 0x9F, 0xF7, 0xD8, 0xE2, 0xC7,
		0xCF, 0x4F, 0x8F, 0xAF, 0xAF, 0xAF, 0xAE, 0xAE, 0xAE, 0xB4,
		0x90, 0x5F, 0x2F, 0x33, 0x18, 0x0F, 0x07, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x80, 0x81, 0x81, 0x81, 0x83, 0x83, 0x80,
		0xC0, 0xC3, 0xC3, 0xC2, 0xE4, 0x00, 0x03, 0xFE, 0x01, 0xA0,
		0x0C, 0x72, 0x02, 0x3D, 0xF3, 0x06, 0x80, 0xFD, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x07, 0xF3, 0x33, 0x53,
		0xBB, 0xB9, 0x79, 0x1C, 0xBC, 0x7A, 0xCB, 0xA7, 0xF1, 0x7B,
		0x7C, 0xB8, 0x84, 0x1E, 0x1E, 0x30, 0x54, 0xF9, 0xFF, 0x3D,
		0xD7, 0x91, 0xAD, 0x52, 0x04, 0x19, 0x13, 0xF7, 0x6F, 0x5F,
		0xBF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xF8, 0xE3,
		0x0C, 0xFC, 0xFE, 0xFF, 0xFF, 0xFE, 0x1C, 0x0E, 0x3E, 0xFE,
		0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD, 0xF9, 0x81, 0x07,
		0x8F, 0x3E, 0x7E, 0xC7, 0x03, 0xCF, 0x47, 0x25, 0xAB, 0xF0,
		0xF7, 0xAF, 0x0F, 0xFF, 0xFF, 0x9F, 0x5F, 0xFF, 0xFF, 0x9F,
		0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0x00, 0x00, 0xFF, 0xE1, 0xF1, 0x09, 0x80,
		0xEC, 0xFF, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0x0F, 0x00, 0xFE, 0xAF, 0x0A, 0xEE, 0xFE, 0xFF,
		0x80, 0x04, 0x07, 0xFE, 0xE3, 0x18, 0x00, 0x01, 0x01, 0x02,
		0x03, 0x03, 0x06, 0xC7, 0xE6, 0xEB, 0xCF, 0x4D, 0x13, 0x8A,
		0xE1, 0xD1, 0x8C, 0x80, 0x1C, 0x3F, 0x62, 0x3F, 0x1B, 0x0E,
		0x00, 0x01, 0x03, 0x6F, 0x6F, 0x30, 0x5F, 0x21, 0x02, 0x00,
		0xC2, 0x47, 0x7F, 0xFC, 0xFD, 0xFF, 0xFE, 0xE7, 0xFF, 0x7F,
		0xE7, 0xFE, 0xBC, 0xDC
};
#endif /* INC_PICTURES_H_ */