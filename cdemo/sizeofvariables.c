#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'x';
  float f = 12.123;
  double l = 142.123;
  
  printf(int value: %d and size: %d bytes\n char b value: %c and size: %d bytes\n double l value: %f and size %d bytes\n", a , sizeof(a), b, sizeof(b), f, sizeof(f), l, sizeof(f));
  
  }
