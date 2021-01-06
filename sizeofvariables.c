#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));



  char c = 'a';
  printf("char c value: %c and size: %lu bytes\n", c, sizeof(c));

  int i = 7;
  printf("int i value %d and size: %lu bytes\n", i, sizeof(i));

  float f =  12.34;
  printf("float f value %f and size: %lu bytes\n", f, sizeof(f));

  double d = 123.456;
  printf("double d value %f and size: %lu bytes\n", d, sizeof(d));

  unsigned int x = 8;
  printf("unsigned int value %d and size: %lu bytes\n", x, sizeof(x));

  short int y = 9;
  printf("short int value %d and size: %lu bytes\n", y, sizeof(y));

}

