#include <stdio.h>

// Variable declarations

extern int a, b, c;

float f, g, h;

int main() {
  // Variable definition

  int a, b, c;
  // Variable initialization
  
  a = 1;
  b = 34;
  
  c = a + b;
  
  printf("Sum value is: %d", c);
  
  g = 1000.999999;
  f = 1.111111;

  h = g + f;

  printf("Sum value is: %f", h);

  return 0;
}