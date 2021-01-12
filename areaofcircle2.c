#include <stdio.h>
#include <math.h>


float areaOfCircle(float radius)
{
  float area = radius * radius * M_PI;
  return area;
}



int main(int argc, char* argv[])
{ 
  if (argc != 3)
  {
    printf("%s : please enter two integers\n", argv[0]);
    return 1;
  }
  float start;
  int found = sscanf(argv[1], "%f", &start);
  if (found != 1)
  {
    printf("first value is not an rational number, enter two rational numbers\n");
    return 1;
  }
  float end;
  found = sscanf(argv[2], "%f", &end);
  if (found != 1)
  {
    printf("second value is not an rational number, enter two rational numbers\n");
    return 1;
  }
  for (float i=start; i <= end; i++)
  {
  	float answer = areaOfCircle(i);
  	printf("area of circle with radius of %f: %f\n", i, answer);
  }
}

