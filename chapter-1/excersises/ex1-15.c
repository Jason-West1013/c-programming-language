#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

double tempCovert(int temp);

int main()
{
  for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, tempCovert(fahr));
}

double tempCovert(int temp)
{
  return (5.0 / 9.0)*(temp - 32);
}
