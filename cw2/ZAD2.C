#include<stdio.h>

int main(void)
{
  float x,y,z,suma;
  printf("Podaj x: ");
  scanf("%f", &x);
  printf("Podaj y: ");
  scanf("%f", &y);
  printf("Podaj z: ");
  scanf("%f", &z);
  printf("Podano liczby\n");
  printf("%13.2f\n%13.2f\n%13.2f\n", x, y, z);
  printf("suma:--------\n");
  suma = x+y+z;
  printf("%13.2f\n", suma);
  return 0;
}