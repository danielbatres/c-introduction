#include <stdio.h>

const int HOGDOGPRICE = 100;
const float BILL = 100.58;
const char NEWLINE = '\n';

#define PIZZACOST 1.5

int main() {
  float pizzaCost;
  float slicesNumber = 3;

  pizzaCost = PIZZACOST * slicesNumber;

  printf("Total bill:%c %f", NEWLINE, pizzaCost);

  return 0;
}