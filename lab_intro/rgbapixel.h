
#ifndef RGBAPIXEL_H
#define RGBAPIXEL_H

#include <inttypes.h>
/**
 * @file rgbapixel.h
 * Definition of the RGBAPixel class for the EasyPNG library.
 *
 * @author Chase Geigle
 * @date Spring 2012
 */
class RGBAPixel
{
public:
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    uint8_t alpha;

    // constructor
    RGBAPixel();    
    RGBAPixel(uint8_t _r, uint8_t _g, uint8_t _b);
    
};

#endif
