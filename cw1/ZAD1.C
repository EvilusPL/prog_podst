#include<stdio.h>

int main(void)
{
  int i, liczby[2], suma = 0;
  for (i=0; i<2; i++)
  {
    printf("Podaj %i liczbe: ", i+1);
    scanf("%i", &liczby[i]);
  }
  for (i=0; i<2; i++)
  {
    suma = suma+liczby[i];
  }
  printf("Suma podanych przez ciebie liczb wynosi %i\n", suma);
  return 0;
}