#if (defined(__AVR__))
#include <avr\pgmspace.h>
#else
#include <pgmspace.h>
#endif
#include <stdint.h>

// 56x56px
const unsigned char epd_bitmap_logo_cropped [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfc, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 
  0xfe, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xfe, 0x00, 
  0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x0f, 
  0x80, 0x7f, 0xff, 0xff, 0x00, 0x02, 0x0f, 0xc0, 0xff, 0xff, 0xff, 0x00, 0x07, 0x07, 0xe0, 0xff, 
  0xff, 0xff, 0x00, 0x0f, 0x83, 0xf0, 0x7f, 0xff, 0xff, 0x03, 0x07, 0xc1, 0xf8, 0x3f, 0xff, 0xff, 
  0x0f, 0x83, 0xe0, 0xfc, 0x1f, 0xff, 0xff, 0x07, 0xc1, 0xf0, 0x7e, 0x0f, 0xff, 0xff, 0x07, 0xe0, 
  0xf8, 0x3f, 0x07, 0xff, 0xff, 0x03, 0xf0, 0x7c, 0x1f, 0x83, 0xff, 0xff, 0x01, 0xf8, 0x3e, 0x0f, 
  0xc1, 0xff, 0xff, 0x00, 0xfc, 0x1f, 0x07, 0xe0, 0xff, 0xff, 0x00, 0x7e, 0x0f, 0x83, 0xf0, 0x7f, 
  0xfe, 0x00, 0x3f, 0x07, 0xc1, 0xf8, 0x3f, 0xfe, 0x00, 0x1f, 0x83, 0xe0, 0xfc, 0x1f, 0xfe, 0x02, 
  0x0f, 0xc1, 0xf0, 0x7e, 0x0f, 0xfe, 0x07, 0x07, 0xe0, 0xf8, 0x3f, 0x0f, 0xfc, 0x0f, 0x83, 0xf0, 
  0x7c, 0x1f, 0x9f, 0xfc, 0x07, 0xc1, 0xf8, 0x3e, 0x3f, 0xff, 0xfc, 0x03, 0xe0, 0xfc, 0x1f, 0x7f, 
  0xff, 0xfc, 0x01, 0xf0, 0x7e, 0x0f, 0xff, 0xff, 0xf8, 0x00, 0xf8, 0x1f, 0x07, 0xff, 0xff, 0xf8, 
  0x00, 0x7c, 0x1f, 0x83, 0xff, 0xff, 0xf0, 0x00, 0x3e, 0x0f, 0xc1, 0xff, 0xff, 0xf0, 0x00, 0x3f, 
  0x07, 0xe0, 0xff, 0xff, 0xe0, 0x00, 0x7f, 0x83, 0xf0, 0x7f, 0xff, 0xe0, 0x00, 0xff, 0xc1, 0xf8, 
  0x3f, 0xff, 0xc0, 0x01, 0xff, 0xe0, 0xfc, 0x1f, 0xff, 0x80, 0x03, 0xff, 0xf0, 0x7e, 0x0f, 0xff, 
  0x80, 0x07, 0xff, 0xf8, 0x3f, 0x07, 0xff, 0x00, 0x0f, 0xff, 0xfc, 0x1f, 0x83, 0xfe, 0x00, 0x1f, 
  0xff, 0xfe, 0x0f, 0xc1, 0xfe, 0x00, 0x3f, 0xff, 0xff, 0x0f, 0xe3, 0xfc, 0x00, 0x7f, 0xff, 0xff, 
  0x9f, 0xf7, 0xf8, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xe0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0xf0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x00
};

// 'logo_with_name', 160x58px
const unsigned char epd_bitmap_logo_with_name [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x03, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xf0, 0x3f, 
  0x03, 0xf8, 0x03, 0x83, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 
  0x00, 0x3f, 0xf0, 0x7f, 0xc3, 0xff, 0x03, 0xc3, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xf0, 0xff, 0xc3, 0xff, 0x83, 0xc3, 0xff, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xf1, 0xff, 0xc3, 0xff, 0xc3, 0xc3, 
  0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x1c, 0x00, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x3c, 0x01, 0xe0, 
  0x83, 0xc7, 0xc3, 0xc3, 0xc3, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x01, 0xff, 0xff, 0xf8, 0x00, 
  0x00, 0x3c, 0x01, 0xe0, 0x03, 0xc3, 0xc3, 0xc3, 0xc3, 0xe0, 0x00, 0x00, 0x00, 0x0c, 0x1f, 0x03, 
  0xff, 0xff, 0xf8, 0x00, 0x00, 0x3c, 0x01, 0xe0, 0x03, 0xc3, 0xe3, 0xc3, 0xc3, 0xe0, 0x00, 0x00, 
  0x00, 0x1e, 0x0f, 0x83, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x3c, 0x01, 0xf8, 0x03, 0xc3, 0xc3, 0xc3, 
  0xc3, 0xe0, 0x00, 0x00, 0x00, 0x1f, 0x07, 0xc1, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xf0, 0xfe, 
  0x03, 0xc7, 0xc3, 0xc3, 0xcf, 0xc0, 0x00, 0x00, 0x0e, 0x0f, 0x83, 0xe0, 0xff, 0xff, 0xf8, 0x00, 
  0x00, 0x3f, 0xf0, 0x7f, 0x83, 0xff, 0xc3, 0xc3, 0xff, 0x80, 0x00, 0x00, 0x1f, 0x07, 0xc1, 0xf0, 
  0x7f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xf0, 0x3f, 0xc3, 0xff, 0x83, 0xc3, 0xff, 0x00, 0x00, 0x00, 
  0x0f, 0x83, 0xe0, 0xf8, 0x3f, 0xff, 0xf8, 0x00, 0x00, 0x3c, 0x00, 0x0f, 0xc3, 0xff, 0x03, 0xc3, 
  0xff, 0x00, 0x00, 0x00, 0x07, 0xc1, 0xf0, 0x7c, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x3c, 0x00, 0x03, 
  0xe3, 0xc0, 0x03, 0xc3, 0xcf, 0x80, 0x00, 0x00, 0x03, 0xe0, 0xf8, 0x3e, 0x0f, 0xff, 0xf8, 0x00, 
  0x00, 0x3c, 0x00, 0x03, 0xe3, 0xc0, 0x03, 0xc3, 0xc7, 0x80, 0x00, 0x00, 0x01, 0xf0, 0x7c, 0x1f, 
  0x07, 0xff, 0xf8, 0x00, 0x00, 0x3c, 0x01, 0x03, 0xe3, 0xc0, 0x03, 0xc3, 0xc3, 0xc0, 0x00, 0x00, 
  0x00, 0xf8, 0x3e, 0x0f, 0x83, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xf1, 0xe7, 0xc3, 0xc0, 0x03, 0xc3, 
  0xc3, 0xe0, 0x00, 0x00, 0x00, 0x7c, 0x1f, 0x07, 0xc1, 0xff, 0xf8, 0x00, 0x00, 0x3f, 0xf1, 0xff, 
  0xc3, 0xc0, 0x03, 0xc3, 0xc1, 0xe0, 0x00, 0x00, 0x00, 0x3e, 0x0f, 0x83, 0xe0, 0xff, 0xf8, 0x00, 
  0x00, 0x3f, 0xf1, 0xff, 0x83, 0xc0, 0x03, 0xc3, 0xc1, 0xf0, 0x00, 0x00, 0x00, 0x1f, 0x07, 0xc1, 
  0xf0, 0x7f, 0xf8, 0x00, 0x00, 0x3f, 0xf0, 0xfe, 0x03, 0xc0, 0x03, 0xc3, 0xc0, 0xf0, 0x00, 0x00, 
  0x06, 0x0f, 0x83, 0xe0, 0xf8, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0x07, 0xc1, 0xf0, 0x7c, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x83, 0xe0, 0xf8, 0x7e, 0xff, 0xf0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc1, 0xf0, 0x7c, 
  0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x07, 0xe0, 0xf8, 0x3f, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x7c, 0x1f, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x3e, 0x0f, 0xff, 0xff, 0xc0, 0x00, 
  0x1f, 0x83, 0xf8, 0x1c, 0x01, 0x8f, 0xc0, 0x7f, 0xfc, 0x03, 0xe0, 0x00, 0x00, 0xfc, 0x1f, 0x07, 
  0xff, 0xff, 0xc0, 0x00, 0x7f, 0xe3, 0xff, 0x0c, 0x01, 0x8f, 0xf8, 0x7f, 0xfe, 0x0f, 0xf8, 0x00, 
  0x00, 0x7e, 0x0f, 0x83, 0xff, 0xff, 0x80, 0x01, 0xf0, 0xc3, 0x07, 0x8e, 0x03, 0x0e, 0x3e, 0x03, 
  0x80, 0x3c, 0x1e, 0x00, 0x00, 0xff, 0x07, 0xc1, 0xff, 0xff, 0x00, 0x01, 0xc0, 0x03, 0x03, 0x86, 
  0x07, 0x0c, 0x0e, 0x03, 0x80, 0x38, 0x0e, 0x00, 0x01, 0xff, 0x83, 0xe0, 0xff, 0xff, 0x00, 0x03, 
  0x80, 0x03, 0x01, 0xc7, 0x07, 0x0c, 0x06, 0x01, 0x80, 0x70, 0x07, 0x00, 0x03, 0xff, 0xc1, 0xf0, 
  0x7f, 0xfe, 0x00, 0x03, 0x00, 0x03, 0x01, 0xc3, 0x06, 0x0c, 0x06, 0x01, 0x80, 0x60, 0x03, 0x00, 
  0x07, 0xff, 0xe0, 0xf8, 0x3f, 0xfe, 0x00, 0x07, 0x00, 0x03, 0x01, 0xc3, 0x8c, 0x0c, 0x06, 0x01, 
  0x80, 0xe0, 0x03, 0x80, 0x0f, 0xff, 0xf0, 0x7c, 0x1f, 0xfc, 0x00, 0x07, 0x00, 0x03, 0x01, 0x81, 
  0x9c, 0x0c, 0x06, 0x01, 0x80, 0xe0, 0x03, 0x80, 0x1f, 0xff, 0xf8, 0x7e, 0x0f, 0xf8, 0x00, 0x07, 
  0x00, 0x03, 0x03, 0x81, 0xd8, 0x0c, 0x0e, 0x01, 0x80, 0xe0, 0x03, 0x80, 0x3f, 0xff, 0xfc, 0x1f, 
  0x07, 0xf0, 0x00, 0x07, 0x00, 0x03, 0xff, 0x00, 0xf8, 0x0c, 0x7c, 0x01, 0x80, 0xe0, 0x03, 0x80, 
  0x7f, 0xff, 0xfe, 0x3f, 0x8f, 0xe0, 0x00, 0x07, 0x00, 0x03, 0xfc, 0x00, 0xf0, 0x0f, 0xf8, 0x01, 
  0x80, 0xe0, 0x03, 0x80, 0xff, 0xff, 0xff, 0x7f, 0xdf, 0xe0, 0x00, 0x07, 0x00, 0x03, 0x0e, 0x00, 
  0x70, 0x0f, 0x80, 0x01, 0x80, 0xe0, 0x03, 0x80, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x07, 
  0x00, 0x03, 0x06, 0x00, 0x60, 0x0c, 0x00, 0x01, 0x80, 0xe0, 0x03, 0x80, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0x03, 0x00, 0x03, 0x07, 0x00, 0x60, 0x0c, 0x00, 0x01, 0x80, 0x60, 0x03, 0x80, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x03, 0x80, 0x03, 0x03, 0x00, 0x60, 0x0c, 0x00, 0x01, 
  0x80, 0x70, 0x07, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x01, 0xc0, 0x03, 0x03, 0x80, 
  0x60, 0x0c, 0x00, 0x01, 0x80, 0x38, 0x0f, 0x00, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x01, 
  0xe0, 0x43, 0x01, 0xc0, 0x60, 0x0c, 0x00, 0x01, 0x80, 0x3c, 0x1e, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0xe0, 0x00, 0x00, 0x00, 0xff, 0xc3, 0x00, 0xc0, 0x60, 0x0c, 0x00, 0x01, 0x80, 0x1f, 0xfc, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x3f, 0x83, 0x00, 0xe0, 0x60, 0x0c, 0x00, 0x01, 
  0x80, 0x07, 0xf0, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xe0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x07, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'bitcoin', 40x40px
const unsigned char epd_bitmap_bitcoin [] PROGMEM = {
  0x00, 0x07, 0x0e, 0x00, 0x00, 0x00, 0x07, 0x0e, 0x00, 0x00, 0x00, 0x07, 0x0e, 0x00, 0x00, 0x00, 
  0x07, 0x0e, 0x00, 0x00, 0x00, 0x07, 0x0e, 0x00, 0x00, 0x00, 0x0f, 0x1e, 0x00, 0x00, 0x07, 0xff, 
  0xff, 0xe0, 0x00, 0x07, 0xff, 0xff, 0xf8, 0x00, 0x07, 0xff, 0xff, 0xfc, 0x00, 0x07, 0xff, 0xff, 
  0xfe, 0x00, 0x00, 0x3f, 0x01, 0xff, 0x00, 0x00, 0x3f, 0x00, 0xff, 0x00, 0x00, 0x3f, 0x00, 0x7f, 
  0x00, 0x00, 0x3f, 0x00, 0x7f, 0x00, 0x00, 0x3f, 0x00, 0x7f, 0x00, 0x00, 0x3f, 0x00, 0x7f, 0x00, 
  0x00, 0x3f, 0x00, 0xfe, 0x00, 0x00, 0x3f, 0x87, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x00, 
  0x3f, 0xff, 0xfe, 0x00, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x3f, 0x80, 0xff, 0x80, 0x00, 0x3f, 
  0x00, 0x3f, 0xc0, 0x00, 0x3f, 0x00, 0x1f, 0xc0, 0x00, 0x3f, 0x00, 0x1f, 0xc0, 0x00, 0x3f, 0x00, 
  0x1f, 0xc0, 0x00, 0x3f, 0x00, 0x1f, 0xc0, 0x00, 0x3f, 0x00, 0x1f, 0xc0, 0x00, 0x3f, 0x00, 0x3f, 
  0xc0, 0x00, 0x3f, 0x80, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0x00, 0x03, 0xff, 0xff, 0xfe, 0x00, 
  0x07, 0xff, 0xff, 0xfc, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0x1e, 0x00, 0x00, 0x00, 
  0x07, 0x0e, 0x00, 0x00, 0x00, 0x07, 0x0e, 0x00, 0x00, 0x00, 0x07, 0x0e, 0x00, 0x00, 0x00, 0x07, 
  0x0e, 0x00, 0x00, 0x00, 0x07, 0x0e, 0x00, 0x00
};

// 'Ethereum', 40x40px
const unsigned char epd_bitmap_ethereum [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 
  0x00, 0x36, 0x00, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 
  0xf7, 0x00, 0x00, 0x00, 0x00, 0xf7, 0x80, 0x00, 0x00, 0x01, 0xf7, 0xc0, 0x00, 0x00, 0x03, 0xf7, 
  0xc0, 0x00, 0x00, 0x03, 0xf7, 0xe0, 0x00, 0x00, 0x07, 0xf7, 0xe0, 0x00, 0x00, 0x0f, 0xf7, 0xf0, 
  0x00, 0x00, 0x0f, 0xf7, 0xf8, 0x00, 0x00, 0x1f, 0xe7, 0xf8, 0x00, 0x00, 0x1f, 0xc1, 0xfc, 0x00, 
  0x00, 0x3e, 0x76, 0x7e, 0x00, 0x00, 0x79, 0xf7, 0x8e, 0x00, 0x00, 0x67, 0xf7, 0xf3, 0x00, 0x00, 
  0x3f, 0xf7, 0xfc, 0x00, 0x00, 0x7f, 0xf7, 0xff, 0x00, 0x00, 0x7f, 0xf7, 0xfe, 0x00, 0x00, 0x1f, 
  0xf7, 0xf8, 0x00, 0x00, 0x07, 0xf7, 0xf0, 0x00, 0x00, 0x41, 0xf7, 0xc3, 0x00, 0x00, 0x30, 0xf7, 
  0x06, 0x00, 0x00, 0x3c, 0x36, 0x1c, 0x00, 0x00, 0x1e, 0x00, 0x78, 0x00, 0x00, 0x0f, 0x80, 0xf8, 
  0x00, 0x00, 0x0f, 0xe3, 0xf0, 0x00, 0x00, 0x07, 0xf7, 0xe0, 0x00, 0x00, 0x03, 0xf7, 0xe0, 0x00, 
  0x00, 0x01, 0xf7, 0xc0, 0x00, 0x00, 0x01, 0xf7, 0x80, 0x00, 0x00, 0x00, 0xf7, 0x00, 0x00, 0x00, 
  0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x76, 0x00, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x00, 
  0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'litecoin', 40x40px
const unsigned char epd_bitmap_litecoin [] PROGMEM = {
  0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 
  0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x01, 
  0xff, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x03, 0xfe, 
  0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x07, 0xfe, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 
  0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x0f, 0xfc, 0x00, 0x00, 
  0x00, 0x0f, 0xf8, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x00, 
  0x1f, 0xff, 0x00, 0x00, 0x00, 0x1f, 0xff, 0x00, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x03, 0xff, 
  0xe0, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x03, 0x7f, 0xe0, 
  0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 
  0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x80, 
  0x01, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0xff, 0x80, 0x03, 
  0xff, 0xff, 0xff, 0x80, 0x03, 0xff, 0xff, 0xff, 0x00, 0x03, 0xff, 0xff, 0xff, 0x00, 0x03, 0xff, 
  0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'cardano', 40x40px
const unsigned char epd_bitmap_cardano [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x04, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x30, 0x00, 0x00, 0x0c, 
  0x00, 0x30, 0x00, 0x00, 0x0c, 0x38, 0x30, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0c, 0x00, 0x00, 
  0x00, 0x30, 0x0c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x01, 0xe7, 0x80, 0x00, 0x00, 0x73, 0xe7, 0xce, 
  0x00, 0x00, 0x73, 0xef, 0xce, 0x00, 0x00, 0x73, 0xe7, 0x8c, 0x00, 0x00, 0x01, 0xc3, 0x80, 0x00, 
  0x00, 0x0e, 0x00, 0x70, 0x00, 0x00, 0x1f, 0x00, 0xf8, 0x00, 0xc6, 0x1f, 0x00, 0xf8, 0x63, 0x86, 
  0x1f, 0x00, 0xf8, 0x60, 0x00, 0x0f, 0x00, 0xf0, 0x00, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x01, 
  0xe7, 0x80, 0x00, 0x00, 0x73, 0xe7, 0xce, 0x00, 0x00, 0x73, 0xef, 0xce, 0x00, 0x00, 0x23, 0xe7, 
  0x8c, 0x00, 0x00, 0x01, 0xc3, 0x80, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x18, 0x00, 
  0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x0c, 0x38, 0x30, 0x00, 0x00, 0x0c, 0x00, 0x30, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 
  0x20, 0x18, 0x04, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'binance', 40x40px
const unsigned char epd_bitmap_binance [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 
  0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x03, 
  0xff, 0xc0, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x0f, 0xff, 0xf0, 0x00, 0x00, 0x1f, 0xe7, 
  0xf8, 0x00, 0x00, 0x3f, 0xc3, 0xfc, 0x00, 0x00, 0x7f, 0x81, 0xfe, 0x00, 0x00, 0xff, 0x00, 0xff, 
  0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0x3c, 0x00, 0x3c, 0x00, 0x00, 0x18, 0x00, 0x18, 0x00, 
  0x08, 0x00, 0x18, 0x00, 0x10, 0x1c, 0x00, 0x3c, 0x00, 0x38, 0x3e, 0x00, 0x7e, 0x00, 0x7c, 0x7f, 
  0x00, 0xff, 0x00, 0xfe, 0x7f, 0x00, 0xff, 0x00, 0xfe, 0x3e, 0x00, 0x7e, 0x00, 0x7c, 0x1c, 0x00, 
  0x3c, 0x00, 0x38, 0x08, 0x00, 0x18, 0x00, 0x10, 0x00, 0x18, 0x00, 0x18, 0x00, 0x00, 0x3c, 0x00, 
  0x3c, 0x00, 0x00, 0x7e, 0x00, 0x7e, 0x00, 0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x7f, 0x81, 0xfe, 
  0x00, 0x00, 0x3f, 0xc3, 0xfc, 0x00, 0x00, 0x1f, 0xe7, 0xf8, 0x00, 0x00, 0x0f, 0xff, 0xf0, 0x00, 
  0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 
  0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'dogecoin', 40x40px
const unsigned char epd_bitmap_dogecoin [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x80, 0x00, 0x01, 0xff, 0xff, 0xf0, 0x00, 0x01, 
  0xff, 0xff, 0xfc, 0x00, 0x01, 0xff, 0xff, 0xff, 0x00, 0x01, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 
  0xff, 0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 0xe0, 0x01, 0xff, 0xff, 0xff, 0xe0, 0x01, 0xff, 0x07, 
  0xff, 0xf0, 0x01, 0xff, 0x00, 0xff, 0xf0, 0x01, 0xff, 0x00, 0x7f, 0xf8, 0x01, 0xff, 0x00, 0x3f, 
  0xf8, 0x01, 0xff, 0x00, 0x1f, 0xf8, 0x01, 0xff, 0x00, 0x0f, 0xf8, 0x01, 0xff, 0x00, 0x0f, 0xfc, 
  0x0f, 0xff, 0xfc, 0x0f, 0xfc, 0x1f, 0xff, 0xfe, 0x07, 0xfc, 0x1f, 0xff, 0xfe, 0x07, 0xfc, 0x1f, 
  0xff, 0xfe, 0x07, 0xfc, 0x1f, 0xff, 0xfe, 0x07, 0xfc, 0x1f, 0xff, 0xfe, 0x07, 0xfc, 0x0f, 0xff, 
  0xf8, 0x07, 0xfc, 0x01, 0xff, 0x00, 0x0f, 0xfc, 0x01, 0xff, 0x00, 0x0f, 0xfc, 0x01, 0xff, 0x00, 
  0x0f, 0xf8, 0x01, 0xff, 0x00, 0x1f, 0xf8, 0x01, 0xff, 0x00, 0x3f, 0xf8, 0x01, 0xff, 0x00, 0xff, 
  0xf0, 0x01, 0xff, 0x8f, 0xff, 0xf0, 0x01, 0xff, 0xff, 0xff, 0xf0, 0x01, 0xff, 0xff, 0xff, 0xe0, 
  0x01, 0xff, 0xff, 0xff, 0xc0, 0x01, 0xff, 0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 0xff, 0x00, 0x01, 
  0xff, 0xff, 0xfe, 0x00, 0x01, 0xff, 0xff, 0xf8, 0x00, 0x01, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'dot', 40x40px
const unsigned char epd_bitmap_dot [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 
  0x01, 0xff, 0x80, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x00, 0x3f, 
  0x81, 0xfc, 0x00, 0x00, 0x3e, 0x00, 0x7e, 0x00, 0x00, 0x7c, 0x00, 0x3e, 0x00, 0x00, 0xf8, 0x00, 
  0x1f, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0x01, 0xe0, 0x00, 0x07, 0x80, 0x01, 0xe0, 0x00, 0x07, 
  0x80, 0x01, 0xe0, 0x00, 0x07, 0x80, 0x01, 0xe1, 0xc0, 0x03, 0x80, 0x01, 0xc1, 0xe0, 0x03, 0x80, 
  0x01, 0xc1, 0xc0, 0x03, 0x80, 0x01, 0xe1, 0xc0, 0x07, 0x80, 0x01, 0xe3, 0xc0, 0x07, 0x80, 0x01, 
  0xe3, 0xc0, 0x07, 0x80, 0x00, 0xe3, 0xc0, 0x0f, 0x00, 0x00, 0x03, 0x80, 0x0f, 0x00, 0x00, 0x07, 
  0x80, 0x1e, 0x00, 0x00, 0x07, 0x80, 0x7e, 0x00, 0x00, 0x07, 0x80, 0xfc, 0x00, 0x00, 0x07, 0xbf, 
  0xf8, 0x00, 0x00, 0x07, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xc0, 0x00, 0x00, 0x0f, 0xfe, 0x00, 
  0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 
  0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x08, 0x00, 0x00, 0x00, 0x1e, 0x1c, 0x00, 0x00, 0x00, 
  0x1c, 0x1c, 0x00, 0x00, 0x00, 0x0c, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'solana', 40x40px
const unsigned char epd_bitmap_solana [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xfe, 0x07, 0xff, 
  0xff, 0xff, 0xfc, 0x0f, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 
  0xff, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xff, 0xff, 0xc0, 0x3f, 0xff, 0xff, 0xff, 0xe0, 0x1f, 
  0xff, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xff, 0xf8, 0x07, 0xff, 0xff, 0xff, 0xfc, 0x03, 0xff, 
  0xff, 0xff, 0xfe, 0x01, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 
  0xff, 0x03, 0xff, 0xff, 0xff, 0xfe, 0x07, 0xff, 0xff, 0xff, 0xfc, 0x0f, 0xff, 0xff, 0xff, 0xf8, 
  0x1f, 0xff, 0xff, 0xff, 0xf0, 0x3f, 0xff, 0xff, 0xff, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xc0, 0x7f, 
  0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'terra', 40x40px
const unsigned char epd_bitmap_terra [] PROGMEM = {
  0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 
  0x0f, 0xff, 0xfe, 0x00, 0x00, 0x07, 0xff, 0xff, 0x80, 0x02, 0x03, 0xff, 0xff, 0xc0, 0x06, 0x00, 
  0xff, 0xff, 0xe0, 0x06, 0x00, 0x3f, 0xff, 0xf0, 0x0f, 0x00, 0x0f, 0xff, 0xf0, 0x1f, 0x00, 0x01, 
  0xff, 0xf8, 0x1f, 0x00, 0x00, 0x3f, 0xfc, 0x3f, 0x00, 0x00, 0x07, 0xfc, 0x3f, 0x80, 0x00, 0x01, 
  0xfe, 0x7f, 0x80, 0x00, 0x01, 0xfe, 0x7f, 0xc0, 0x00, 0x00, 0xfe, 0x7f, 0xc0, 0x00, 0x00, 0x7e, 
  0xff, 0xe0, 0x00, 0x00, 0x7e, 0xff, 0xf0, 0x00, 0x00, 0x3e, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 
  0xfc, 0x00, 0x00, 0x0f, 0xff, 0xfe, 0x00, 0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x01, 0xff, 0xff, 
  0x80, 0x00, 0x00, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x7f, 0xff, 0xf0, 0x00, 0x00, 0x7f, 0xff, 0xfc, 
  0x00, 0x00, 0x7f, 0xff, 0xff, 0x80, 0x00, 0x3f, 0xff, 0xff, 0xfc, 0x1e, 0x3f, 0xff, 0xff, 0xff, 
  0xfc, 0x1f, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x0f, 0xff, 0xff, 0xff, 0xf0, 
  0x07, 0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x03, 0xff, 0xff, 0xff, 0xc0, 0x00, 
  0xff, 0xff, 0xff, 0x80, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x00, 0x0f, 
  0xff, 0xf0, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00
};


// 'algorand', 40x40px
const unsigned char epd_bitmap_algorand [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00, 
  0x1f, 0xc0, 0x00, 0x00, 0x00, 0x1f, 0xc0, 0x00, 0x00, 0x00, 0x3f, 0xe0, 0x00, 0x00, 0x00, 0x7f, 
  0xe0, 0x00, 0x00, 0x00, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0xf9, 0xff, 0x00, 0x00, 0x00, 0xf9, 0xfe, 
  0x00, 0x00, 0x01, 0xf1, 0xfe, 0x00, 0x00, 0x03, 0xf0, 0xfc, 0x00, 0x00, 0x03, 0xe0, 0xfc, 0x00, 
  0x00, 0x07, 0xe0, 0xf8, 0x00, 0x00, 0x07, 0xc1, 0xf8, 0x00, 0x00, 0x0f, 0x81, 0xf8, 0x00, 0x00, 
  0x0f, 0x83, 0xfc, 0x00, 0x00, 0x1f, 0x07, 0xfc, 0x00, 0x00, 0x3f, 0x07, 0xfc, 0x00, 0x00, 0x3e, 
  0x0f, 0xfc, 0x00, 0x00, 0x7e, 0x0f, 0xbe, 0x00, 0x00, 0x7c, 0x1f, 0x3e, 0x00, 0x00, 0xf8, 0x1f, 
  0x1e, 0x00, 0x00, 0xf8, 0x3e, 0x1f, 0x00, 0x01, 0xf0, 0x7e, 0x1f, 0x00, 0x03, 0xf0, 0x7c, 0x1f, 
  0x00, 0x03, 0xe0, 0xfc, 0x0f, 0x00, 0x07, 0xe0, 0xf8, 0x0f, 0x80, 0x07, 0xc1, 0xf0, 0x0f, 0x80, 
  0x0f, 0x81, 0xf0, 0x0f, 0x80, 0x0f, 0x83, 0xe0, 0x07, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'link', 40x40px
const unsigned char epd_bitmap_link [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 
  0x01, 0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x0f, 0xff, 0xf0, 0x00, 0x00, 0x3f, 
  0xff, 0xfc, 0x00, 0x00, 0x7f, 0xff, 0xfe, 0x00, 0x01, 0xff, 0xe7, 0xff, 0x80, 0x07, 0xff, 0x81, 
  0xff, 0xe0, 0x1f, 0xff, 0x00, 0xff, 0xf8, 0x1f, 0xfc, 0x00, 0x3f, 0xf8, 0x1f, 0xf0, 0x00, 0x0f, 
  0xf8, 0x1f, 0xc0, 0x00, 0x03, 0xf8, 0x1f, 0xc0, 0x00, 0x03, 0xf8, 0x1f, 0x80, 0x00, 0x03, 0xf8, 
  0x1f, 0x80, 0x00, 0x03, 0xf8, 0x1f, 0x80, 0x00, 0x03, 0xf8, 0x1f, 0x80, 0x00, 0x03, 0xf8, 0x1f, 
  0x80, 0x00, 0x03, 0xf8, 0x1f, 0x80, 0x00, 0x03, 0xf8, 0x1f, 0x80, 0x00, 0x03, 0xf8, 0x1f, 0x80, 
  0x00, 0x03, 0xf8, 0x1f, 0x80, 0x00, 0x03, 0xf8, 0x1f, 0x80, 0x00, 0x03, 0xf8, 0x1f, 0xc0, 0x00, 
  0x03, 0xf8, 0x1f, 0xc0, 0x00, 0x03, 0xf8, 0x1f, 0xf0, 0x00, 0x0f, 0xf8, 0x1f, 0xfc, 0x00, 0x3f, 
  0xf8, 0x1f, 0xff, 0x00, 0xff, 0xf8, 0x07, 0xff, 0x81, 0xff, 0xe0, 0x01, 0xff, 0xe7, 0xff, 0x80, 
  0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x00, 0x0f, 0xff, 0xf0, 0x00, 0x00, 
  0x03, 0xff, 0xc0, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'xrp', 40x40px
const unsigned char epd_bitmap_xrp [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 
  0x00, 0x00, 0xf0, 0x07, 0xc0, 0x00, 0x03, 0xe0, 0x03, 0xe0, 0x00, 0x07, 0xc0, 0x01, 0xf0, 0x00, 
  0x0f, 0x80, 0x00, 0xf8, 0x00, 0x1f, 0x00, 0x00, 0x7c, 0x00, 0x3e, 0x00, 0x00, 0x3e, 0x00, 0x7c, 
  0x00, 0x00, 0x1f, 0x00, 0xf8, 0x00, 0x00, 0x0f, 0x81, 0xf0, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 
  0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x01, 
  0xff, 0x80, 0x00, 0x00, 0x03, 0xff, 0xc0, 0x00, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x0f, 0x81, 
  0xf0, 0x00, 0x00, 0x1f, 0x00, 0xf8, 0x00, 0x00, 0x3e, 0x00, 0x7c, 0x00, 0x00, 0x7c, 0x00, 0x3e, 
  0x00, 0x00, 0xf8, 0x00, 0x1f, 0x00, 0x01, 0xf0, 0x00, 0x0f, 0x80, 0x03, 0xe0, 0x00, 0x07, 0xc0, 
  0x07, 0xc0, 0x00, 0x03, 0xe0, 0x0f, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'matic', 40x40px
const unsigned char epd_bitmap_matic [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x78, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x00, 0x0f, 0xcf, 
  0xc0, 0x00, 0x00, 0x1f, 0x03, 0xe0, 0x00, 0x00, 0x7c, 0x01, 0xf8, 0x00, 0x00, 0xf8, 0x00, 0x78, 
  0x00, 0x00, 0xf0, 0x00, 0x38, 0x00, 0x00, 0xf0, 0x00, 0x38, 0x00, 0x00, 0xe0, 0x00, 0x18, 0x00, 
  0x00, 0xe0, 0x00, 0x10, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x1e, 0x00, 0xe0, 0x00, 0x00, 0x7f, 0x80, 
  0xe0, 0x00, 0x01, 0xff, 0xe0, 0xe0, 0x00, 0x03, 0xe1, 0xf8, 0xf0, 0x00, 0x0f, 0x80, 0x7c, 0xf0, 
  0x00, 0x3e, 0x00, 0x3e, 0x7c, 0x00, 0xfc, 0x00, 0x0f, 0x3e, 0x01, 0xf0, 0x00, 0x0f, 0x1f, 0x87, 
  0xc0, 0x00, 0x0f, 0x07, 0xff, 0x00, 0x00, 0x0f, 0x01, 0xfe, 0x00, 0x00, 0x0f, 0x00, 0x78, 0x00, 
  0x00, 0x0f, 0x00, 0x00, 0x08, 0x00, 0x0f, 0x00, 0x00, 0x18, 0x00, 0x0f, 0x00, 0x00, 0x18, 0x00, 
  0x0f, 0x00, 0x00, 0x1c, 0x00, 0x0f, 0x00, 0x00, 0x1e, 0x00, 0x1f, 0x00, 0x00, 0x1f, 0x80, 0x7e, 
  0x00, 0x00, 0x07, 0xc0, 0xfc, 0x00, 0x00, 0x03, 0xff, 0xf0, 0x00, 0x00, 0x00, 0xff, 0xc0, 0x00, 
  0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'tron', 40x40px
const unsigned char epd_bitmap_tron [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x03, 0xcf, 
  0xe0, 0x00, 0x00, 0x01, 0xc0, 0xff, 0x00, 0x00, 0x01, 0xe0, 0x0f, 0xf0, 0x00, 0x00, 0xb0, 0x00, 
  0xfc, 0x00, 0x00, 0x98, 0x00, 0x1e, 0x00, 0x00, 0xcc, 0x00, 0x33, 0x80, 0x00, 0x44, 0x00, 0x61, 
  0xc0, 0x00, 0x46, 0x00, 0xc3, 0xc0, 0x00, 0x63, 0x01, 0x8f, 0x80, 0x00, 0x21, 0x83, 0xbf, 0x80, 
  0x00, 0x20, 0xc3, 0xf3, 0x00, 0x00, 0x30, 0x67, 0xc6, 0x00, 0x00, 0x10, 0x3f, 0x06, 0x00, 0x00, 
  0x18, 0x3c, 0x0c, 0x00, 0x00, 0x18, 0x10, 0x18, 0x00, 0x00, 0x08, 0x10, 0x18, 0x00, 0x00, 0x0c, 
  0x30, 0x30, 0x00, 0x00, 0x04, 0x30, 0x60, 0x00, 0x00, 0x04, 0x30, 0xe0, 0x00, 0x00, 0x06, 0x30, 
  0xc0, 0x00, 0x00, 0x02, 0x31, 0x80, 0x00, 0x00, 0x02, 0x23, 0x80, 0x00, 0x00, 0x03, 0x23, 0x00, 
  0x00, 0x00, 0x01, 0x26, 0x00, 0x00, 0x00, 0x01, 0xee, 0x00, 0x00, 0x00, 0x01, 0xfc, 0x00, 0x00, 
  0x00, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'tether', 40x40px
const unsigned char epd_bitmap_tether [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x07, 
  0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 
  0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 0xff, 0xe0, 0x03, 0xff, 0xff, 
  0xff, 0xe0, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0x80, 
  0x00, 0x00, 0x1f, 0xff, 0xf8, 0x00, 0x03, 0xff, 0xff, 0xff, 0xe0, 0x1f, 0xc1, 0xff, 0x83, 0xf8, 
  0x7c, 0x00, 0xff, 0x80, 0x1e, 0x70, 0x00, 0xff, 0x80, 0x0e, 0x78, 0x00, 0xff, 0x80, 0x1e, 0x7f, 
  0x80, 0xff, 0x01, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xf8, 0x03, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x0f, 
  0xff, 0xf0, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 
  0x80, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0x80, 
  0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 
  0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0x80, 0x00, 0x00, 
  0x01, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'bat', 40x40px
const unsigned char epd_bitmap_bat [] PROGMEM = {
  0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 
  0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x01, 
  0xff, 0x80, 0x00, 0x00, 0x01, 0xdb, 0x80, 0x00, 0x00, 0x03, 0x99, 0xc0, 0x00, 0x00, 0x03, 0x99, 
  0xc0, 0x00, 0x00, 0x07, 0x18, 0xe0, 0x00, 0x00, 0x06, 0x18, 0x60, 0x00, 0x00, 0x0e, 0x18, 0x70, 
  0x00, 0x00, 0x0c, 0x18, 0x38, 0x00, 0x00, 0x1c, 0x3c, 0x38, 0x00, 0x00, 0x38, 0x3c, 0x1c, 0x00, 
  0x00, 0x38, 0x7e, 0x1c, 0x00, 0x00, 0x70, 0x66, 0x0e, 0x00, 0x00, 0x60, 0xe7, 0x06, 0x00, 0x00, 
  0xe1, 0xc3, 0x87, 0x00, 0x01, 0xc1, 0xc3, 0x83, 0x00, 0x01, 0xc3, 0x81, 0xc3, 0x80, 0x03, 0x83, 
  0x81, 0xc1, 0xc0, 0x03, 0x87, 0x00, 0xe1, 0xc0, 0x07, 0x06, 0x00, 0x60, 0xe0, 0x06, 0x0e, 0x00, 
  0x70, 0x60, 0x0e, 0x1f, 0xff, 0xf8, 0x70, 0x1c, 0x3f, 0xff, 0xfc, 0x38, 0x1c, 0xff, 0xff, 0xff, 
  0x38, 0x3b, 0xe0, 0x00, 0x07, 0xdc, 0x3f, 0xc0, 0x00, 0x03, 0xfc, 0x7f, 0x00, 0x00, 0x00, 0xfe, 
  0x7e, 0x00, 0x00, 0x00, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'avalanche', 40x40px
const unsigned char epd_bitmap_avax [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 
  0xfe, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x01, 0xff, 0x00, 0x00, 0x00, 0x01, 0xff, 
  0x80, 0x00, 0x00, 0x03, 0xff, 0x80, 0x00, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x00, 0x07, 0xff, 0xc0, 
  0x00, 0x00, 0x0f, 0xff, 0xc0, 0x00, 0x00, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x1f, 0xff, 0x80, 0x00, 
  0x00, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x1c, 0x00, 0x00, 
  0x7f, 0xfe, 0x3e, 0x00, 0x00, 0xff, 0xfc, 0x3e, 0x00, 0x00, 0xff, 0xfc, 0x7f, 0x00, 0x01, 0xff, 
  0xf8, 0x7f, 0x00, 0x01, 0xff, 0xf0, 0xff, 0x80, 0x03, 0xff, 0xf1, 0xff, 0x80, 0x07, 0xff, 0xe1, 
  0xff, 0xc0, 0x07, 0xff, 0xe3, 0xff, 0xe0, 0x0f, 0xff, 0xc3, 0xff, 0xe0, 0x0f, 0xff, 0x87, 0xff, 
  0xe0, 0x0f, 0xff, 0x87, 0xff, 0xe0, 0x07, 0xfe, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'uniswap', 40x40px
const unsigned char epd_bitmap_uniswap [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x04, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x30, 0x60, 
  0x00, 0x00, 0x00, 0x10, 0xd8, 0x00, 0x00, 0x00, 0x48, 0xec, 0x01, 0x00, 0x00, 0x04, 0xe7, 0xf3, 
  0x00, 0x00, 0x26, 0xe3, 0xff, 0x80, 0x00, 0x13, 0x61, 0xff, 0xc0, 0x00, 0x11, 0xf0, 0xff, 0x80, 
  0x00, 0x08, 0xd0, 0x7f, 0xc0, 0x00, 0x0d, 0x80, 0x3e, 0xc0, 0x00, 0x0f, 0x80, 0x60, 0x60, 0x00, 
  0x1c, 0x30, 0x7f, 0x00, 0x00, 0x18, 0x50, 0x7f, 0xe0, 0x00, 0x18, 0x70, 0x3f, 0xf0, 0x00, 0x18, 
  0x00, 0x1f, 0xf8, 0x00, 0x38, 0x00, 0x07, 0xf8, 0x00, 0x30, 0x00, 0x04, 0xf8, 0x00, 0x70, 0x00, 
  0x07, 0x38, 0x00, 0xe0, 0x00, 0x17, 0xd8, 0x01, 0xf0, 0x00, 0x17, 0xe8, 0x01, 0xf8, 0x00, 0x63, 
  0xe8, 0x01, 0xbc, 0x0f, 0xc3, 0xf0, 0x01, 0xfe, 0x00, 0x01, 0xf0, 0x01, 0xfe, 0x1c, 0x00, 0xf0, 
  0x00, 0xfe, 0xff, 0x00, 0xf0, 0x00, 0xf9, 0xff, 0x80, 0x70, 0x00, 0x63, 0xf3, 0x80, 0x60, 0x00, 
  0x00, 0x63, 0xc0, 0x60, 0x00, 0x00, 0x32, 0xc0, 0xc0, 0x00, 0x00, 0x1c, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00
};
