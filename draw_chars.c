#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_11x16(char c){
  c -= 0x20;
  for (char row = 0; row < 11; row++) {
    unsigned short rowBits = font_11x16[c][row];
    for (char col = 0; col < 16; col++) {
      unsigned short colMask = 1 << (15-col); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}
void print_char_5x7(char c){
  c -=0x20;
  for(char row = 0; row < 7; row++){
    for(char col = 0; col < 5; col++){
      unsigned char colBits = font_5x7[(int)c][col];
      unsigned char rowMask = 1 << row;
      putchar((colBits & rowMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}
