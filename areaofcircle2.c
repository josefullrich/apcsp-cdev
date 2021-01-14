#include <stdio.h>
#include <math.h>




// add your areaOfCircle function here - it must NOT printf, instead it must
// return the result to be printed in main
float areaOfCircle(float radius)
{
  float area = radius * radius * M_PI;
  return area;
}


int main() 
{
  // the two variables which control the number of times areaOfCircle is called
  // in this case 5.2, 6.2, 7.2
  float start, end;
  char input[256];
  printf("input lower: ");
  scanf("%f", &start);
  while(start<0)
  {
  	printf("Please enter a positive value.\n");
  	scanf("%f", &start);
  }
  printf("input upper: ");
  scanf("%f", &end);
  while(end<0)
  {
  	printf("Please enter a positive value.\n");
  	scanf("%f", &end);
  }
  while(start>end)
  {
  	printf("Please enter a larger end value than start value\n");
  	scanf("%f", &end);
  }
  for (float i=start; i <= end; i++)
  {
	float answer = areaOfCircle(i);
  	printf("area of radius %f = %f\n", i, answer);
  }
  return 0;
}
