#include<stdio.h>

int main()
{
  char znak;
  printf("Podaj znak: ");
  scanf("%c", &znak);
  printf("Postac dziesietna: %i\n", znak);
  printf("Postac szesnastkowa: %x\n", znak);
  return 0;
}