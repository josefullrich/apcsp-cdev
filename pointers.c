#include <stdio.h>

int main()
{
 
  float d = 8;
  float* ptrtoa;

  ptrtoa = &d;

  float e = *ptrtoa;

  *ptrtoa = 9;
  printf("The value of d is %f\n", d);
  printf("The value of e is %f\n", e);
  printf("The address of d is %p\n", (void*)&d);
  printf("The address of e is %p\n", (void*)&e);

  float temp;
  temp = d;
  d = e;
  e = temp;
  printf("The value of d after swapping is %f\n", d);
  printf("The value of e after swapping is %f\n", e);

}
