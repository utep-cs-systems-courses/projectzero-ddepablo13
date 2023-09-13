#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

// Prints an arrow of int size
void print_arrow(int size){

  //Arrow head
  for(int i = 1; i <= size; i++){
    for (int j = size; j > i; j--){
      putchar(' ');
    }
    for(int j = 1;j <= 2 * i - 1; j++){
    putchar('*');
    }
    putchar('\n');
 }

  //Arrow tail
  for(int i = 1; i <= size; i++){
    for(int j = 1; j < size; j++){
      putchar(' ');
    }
    putchar('*');
    putchar('\n');
  }
}
