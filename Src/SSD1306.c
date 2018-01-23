/*
 * SSD1306.c
 *
 *  Created on: 14 дек. 2017 г.
 *      Author: Valenti
 */

#include "SSD1306.h"

typedef struct
{
    uint16_t CurrentX;
    uint16_t CurrentY;
    uint8_t Inverted;
    uint8_t Initialized;
} SSD1306_t;

static SSD1306_t SSD1306;

void
ssd1306_writeByte (uint8_t _writeMode, uint8_t _data)
{
    uint8_t l_sendArray[2] = { _writeMode, _data };

    HAL_I2C_Master_Transmit (&hi2c1, SSD1306_I2C_ADDR, l_sendArray, 2,
    HAL_MAX_DELAY);
}

void
ssd1306_writeCommand (uint8_t _command)
{
    ssd1306_writeByte (SSD1306_I2C_CMD_MODE, _command);
}

void
ssd1306_updateScreen (void)
{
    SSD1306_pDispBuffer[0] = SSD1306_I2C_MULTIBYTE_DATA_MODE;
    HAL_I2C_Master_Transmit (&hi2c1, SSD1306_I2C_ADDR, SSD1306_pDispBuffer,
    SSD1306_DISP_SIZE,1000);

}

void
ssd1306_fill (SSD1306_Colors _fillColor)
{
    /* Set memory */
    memset (SSD1306_pDispBuffer, (_fillColor == SSD1306_BLACK) ? 0x00 : 0xFF,
    SSD1306_DISP_SIZE);
    ssd1306_setCursor(1,1);
}

void
ssd1306_sendPicture (uint8_t * _picture, int _pictureSize)
{
    memcpy (SSD1306_pDispBuffer + 1, _picture, _pictureSize);
}

void
ssd1306_initDisplay (void)
{
    ssd1306_writeCommand ( SDD1306_SET_DISPLAY_OFF);
    ssd1306_writeCommand ( SSD1306_SET_DISPLAY_CLOCK_DIVIDE_RATIO);
    ssd1306_writeCommand ( SSD1306_SET_DISPLAY_OSCILLATOR_FREQ);
    ssd1306_writeCommand ( SSD1306_SET_MULTIPLEX_RATIO);
    ssd1306_writeCommand ( SSD1306_SET_AFTER_MULTIPLEX_RATIO);
    ssd1306_writeCommand ( SSD1306_SET_DISP_OFFSET);
    ssd1306_writeCommand ( SSD1306_SET_AFTER_DISPLAY_OFFSET);
    ssd1306_writeCommand ( SSD1306_SET_START_LINE);
    ssd1306_writeCommand ( SSD1306_SET_CHARGE_PUMP);
    ssd1306_writeCommand ( SSD1306_SET_VCC_INTERNAL_DC);
    ssd1306_writeCommand ( SSD1306_SET_SEGMENT_REMAP);
    ssd1306_writeCommand ( SSD1306_SET_COM_DIRECION);
    ssd1306_writeCommand ( SSD1306_SET_COM_HARDWARE_CONF_1);
    ssd1306_writeCommand ( SSD1306_SET_COM_HARDWARE_CONF_2);
    ssd1306_writeCommand ( SSD1306_SET_CONTRAST_CTRL);
    ssd1306_writeCommand ( SSD1306_SET_CONTRAST_CTRL_VCC_INTERNAL);
    ssd1306_writeCommand ( SSD1306_SET_PRECHARGE_PERIOD);
    ssd1306_writeCommand ( SSD1306_SET_PRECHARGE_PREIOD_VCC_INTERNAL);
    ssd1306_writeCommand ( SSD1306_SET_VCOMH_DESELECT_LEVEL_1);
    ssd1306_writeCommand ( SSD1306_SET_VCOMH_DESELECT_LEVEL_2);
    ssd1306_writeCommand ( SSD1306_SET_ENTIRE_DISPLAY_ON_OFF);
    ssd1306_writeCommand ( SSD1306_SET_NORMAL_DISPLAY);
    ssd1306_writeCommand ( SSD1306_SET_LOWER_COLUMN_START_ADRESS);
    ssd1306_writeCommand ( SSD1306_SET_HIGHER_COLUMN_START_ADRESS);
    ssd1306_writeCommand ( SSD1306_SET_MEMORY_ADRESSING_MODE);
    ssd1306_writeCommand ( SSD1306_SET_PAGE_START_ADRESS);
    ssd1306_writeCommand ( SSD1306_DEACTIVATE_SCROLL);
    ssd1306_writeCommand ( SSD1306_SET_DISPLAY_ON);
    ssd1306_fill (SSD1306_BLACK);
    ssd1306_updateScreen ();
}

void
ssd1306_makeContinuousScroll (
                              SSD1306_rotationType _rotationType,
                              SSD1306_rotationSpeed _rotationSpeed,
                              uint8_t _rotationOffset,
                              uint8_t _startPage,
                              uint8_t _endPage)
{
    ssd1306_writeCommand (_rotationType);
    ssd1306_writeCommand (0x00);
    ssd1306_writeCommand (_startPage);
    ssd1306_writeCommand (_rotationSpeed);
    ssd1306_writeCommand (_endPage);
    ssd1306_writeCommand (_rotationOffset);
    ssd1306_activateScroll ();
}

void
ssd1306_makeShortScroll (
                         SSD1306_rotationType _rotationType,
                         SSD1306_rotationSpeed _rotationSpeed,
                         uint8_t _startPage,
                         uint8_t _endPage)
{
    ssd1306_writeCommand (_rotationType);
    ssd1306_writeCommand (0x00);
    ssd1306_writeCommand (_startPage);
    ssd1306_writeCommand (_rotationSpeed);
    ssd1306_writeCommand (_endPage);
    ssd1306_writeCommand (0x00);
    ssd1306_writeCommand (0xFF);
    ssd1306_activateScroll ();

}

void
ssd1306_setPixel (uint8_t _xCoord, uint8_t _yCoord, SSD1306_Colors _color)
{

    if (_color == SSD1306_BLACK)
    {
        SSD1306_pDispBuffer[_xCoord + (_yCoord / 8) * SSD1306_WIDTH] &= ~(1
                << (_yCoord % 8));
    }
    else
    {
        SSD1306_pDispBuffer[_xCoord + (_yCoord / 8) * SSD1306_WIDTH] |= (1
                << (_yCoord % 8));
    }
}

void
ssd1306_activateScroll (void)
{
    ssd1306_writeCommand ( SSD1306_ACTIVATE_SCROLL);
}

void
ssd1306_deActivateScroll (void)

{
    ssd1306_writeCommand ( SSD1306_DEACTIVATE_SCROLL);
}

void
ssd1306_displayOn (void)
{
    ssd1306_writeCommand (0x8D);
    ssd1306_writeCommand (0x14);
    ssd1306_writeCommand (0xAF);
}

void
ssd1306_displayOff (void)
{
    ssd1306_writeCommand (0x8D);
    ssd1306_writeCommand (0x10);
    ssd1306_writeCommand (0xAE);
}

//TO DO - Imlplement structure to return runtime errors

char
ssd1306_putChar (char _char, const FontInfo_t* _fontInfo, SSD1306_Colors _color)
{
    /**
    *HOW IT'S WORK
    *1.Calculate the character index in fontArray. This is the ASCII code minus 33
    *2.If incoming character is space - set space in current x and y display buffer positions.
    *3.Draw the character row by row
    */
    if (_char == ' ')
        {
            //ssd1306_setPixel (SSD1306.CurrentX + _fontInfo->m_spaceWidth,
            //                  SSD1306.CurrentY, SSD1306_BLACK);
            ssd1306_setCursor(SSD1306.CurrentX + _fontInfo->m_spaceWidth ,SSD1306.CurrentY );
            return 0x20;
        }

    uint16_t l_charIndex = _char - 33;
    uint16_t l_rowByte = 0;
    uint16_t l_charOffset = _fontInfo->m_fontDescriptor[l_charIndex].m_charOffset;
    uint16_t l_charWidth = _fontInfo->m_fontDescriptor[l_charIndex].m_charWidth;
    uint8_t l_pixelCharWidth = _fontInfo->m_fontDescriptor[l_charIndex].m_charWidth * 8;

    for (int i = 0; i < _fontInfo->m_charHeight; i++)
    {
        uint8_t l_bitsCounter = 0;

        l_rowByte = _fontInfo->m_charBitmap[l_charOffset + i * l_charWidth];

        for (int j = 0; j < l_pixelCharWidth; j++)
        {
            if (l_bitsCounter == 8)
            {
                l_bitsCounter = 0;
                l_rowByte = _fontInfo->m_charBitmap[l_charOffset + i * l_charWidth + 1];

            }
            SSD1306_Colors l_color = ((l_rowByte << l_bitsCounter) & 0x80) ? _color : !_color;

            ssd1306_setPixel (SSD1306.CurrentX + j, (SSD1306.CurrentY + i),
                              l_color);

            l_bitsCounter++;
        }
    }

    SSD1306.CurrentX += _fontInfo->m_fontDescriptor[l_charIndex].m_charWidth * 8;//+ _fontInfo->m_spaceWidth;
    if (SSD1306.CurrentX >= SSD1306_WIDTH)
    {
        SSD1306.CurrentY += _fontInfo->m_charHeight + _fontInfo->m_spaceWidth;
        SSD1306.CurrentX = 0;
    }
    return _char;
}

char
ssd1306_putString (char* _string,
                   const FontInfo_t* _fontInfo,
                   SSD1306_Colors color)
{
    while (*_string)
    {
        if (ssd1306_putChar (*_string, _fontInfo, color) != *_string)
        {
            return *_string;
        }
        _string++;
    }
    return *_string;
}

void
ssd1306_setCursor (uint8_t _xCoord,
                   uint8_t _yCoord)
{
    if (_xCoord > 128 || _yCoord > 64)
        return;
    SSD1306.CurrentX = _xCoord;
    SSD1306.CurrentY = _yCoord;
}

/**
 * Geometric primitives
 */
void
ssd1306_drawLine (uint16_t x0,
                  uint16_t y0,
                  uint16_t x1,
                  uint16_t y1,
                  SSD1306_Colors _color)
{
    int16_t dx, dy, sx, sy, err, e2, i, tmp;

    /* Check for overflow */
    if (x0 >= SSD1306_WIDTH)
    {
        x0 = SSD1306_WIDTH - 1;
    }
    if (x1 >= SSD1306_WIDTH)
    {
        x1 = SSD1306_WIDTH - 1;
    }
    if (y0 >= SSD1306_HEIGHT)
    {
        y0 = SSD1306_HEIGHT - 1;
    }
    if (y1 >= SSD1306_HEIGHT)
    {
        y1 = SSD1306_HEIGHT - 1;
    }

    dx = (x0 < x1) ? (x1 - x0) : (x0 - x1);
    dy = (y0 < y1) ? (y1 - y0) : (y0 - y1);
    sx = (x0 < x1) ? 1 : -1;
    sy = (y0 < y1) ? 1 : -1;
    err = ((dx > dy) ? dx : -dy) / 2;

    if (dx == 0)
    {
        if (y1 < y0)
        {
            tmp = y1;
            y1 = y0;
            y0 = tmp;
        }

        if (x1 < x0)
        {
            tmp = x1;
            x1 = x0;
            x0 = tmp;
        }

        /* Vertical line */
        for (i = y0; i <= y1; i++)
        {
            ssd1306_setPixel (x0, i, _color);
        }

        /* Return from function */
        return;
    }

    if (dy == 0)
    {
        if (y1 < y0)
        {
            tmp = y1;
            y1 = y0;
            y0 = tmp;
        }

        if (x1 < x0)
        {
            tmp = x1;
            x1 = x0;
            x0 = tmp;
        }

        /* Horizontal line */
        for (i = x0; i <= x1; i++)
        {
            ssd1306_setPixel (i, y0, _color);
        }

        /* Return from function */
        return;
    }

    while (1)
    {
        ssd1306_setPixel (x0, y0, _color);
        if (x0 == x1 && y0 == y1)
        {
            break;
        }
        e2 = err;
        if (e2 > -dx)
        {
            err -= dy;
            x0 += sx;
        }
        if (e2 < dy)
        {
            err += dx;
            y0 += sy;
        }
    }

}

void
ssd1306_drawRectangle (uint16_t x,
                       uint16_t y,
                       uint16_t w,
                       uint16_t h,
                       SSD1306_Colors _color)
{
    /* Check input parameters */
    if (x >= SSD1306_WIDTH || y >= SSD1306_HEIGHT)
    {
        /* Return error */
        return;
    }

    /* Check width and height */
    if ((x + w) >= SSD1306_WIDTH)
    {
        w = SSD1306_WIDTH - x;
    }
    if ((y + h) >= SSD1306_HEIGHT)
    {
        h = SSD1306_HEIGHT - y;
    }

    /* Draw 4 lines */
    ssd1306_drawLine (x, y, x + w, y, _color); /* Top line */
    ssd1306_drawLine (x, y + h, x + w, y + h, _color); /* Bottom line */
    ssd1306_drawLine (x, y, x, y + h, _color); /* Left line */
    ssd1306_drawLine (x + w, y, x + w, y + h, _color); /* Right line */
}

void
ssd1306_drawCircle (int16_t x0,
                    int16_t y0,
                    int16_t r,
                    SSD1306_Colors _color)
{
    int16_t f = 1 - r;
    int16_t ddF_x = 1;
    int16_t ddF_y = -2 * r;
    int16_t x = 0;
    int16_t y = r;

    ssd1306_setPixel (x0, y0 + r, _color);
    ssd1306_setPixel (x0, y0 - r, _color);
    ssd1306_setPixel (x0 + r, y0, _color);
    ssd1306_setPixel (x0 - r, y0, _color);

    while (x < y)
    {
        if (f >= 0)
        {
            y--;
            ddF_y += 2;
            f += ddF_y;
        }
        x++;
        ddF_x += 2;
        f += ddF_x;

        ssd1306_setPixel (x0 + x, y0 + y, _color);
        ssd1306_setPixel (x0 - x, y0 + y, _color);
        ssd1306_setPixel (x0 + x, y0 - y, _color);
        ssd1306_setPixel (x0 - x, y0 - y, _color);

        ssd1306_setPixel (x0 + y, y0 + x, _color);
        ssd1306_setPixel (x0 - y, y0 + x, _color);
        ssd1306_setPixel (x0 + y, y0 - x, _color);
        ssd1306_setPixel (x0 - y, y0 - x, _color);
    }
}
