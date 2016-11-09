#include<stdio.h>

int main(void)
{
  int i, j, k;
  printf("Podaj i: ");
  scanf("%d", &i);
  printf("Podaj j: ");
  scanf("%d", &j);
  printf("Podaj k: ");
  scanf("%d", &k);
  printf("Podano liczby\n");
  printf("%8d\n%8d\n%8d\n", i, j, k);
  return 0;
}