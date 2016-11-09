#include<stdio.h>

int main(void)
{
  int i;
  printf("Podaj liczbe: ");
  scanf("%i", &i);
  printf("Podano liczbe %i DEC czyli %x HEX\n", i, i);
  return 0;
}