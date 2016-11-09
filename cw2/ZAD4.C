#include<stdio.h>

int main(void)
{
  int wys,i;
  char gwiazdki;
  gwiazdki = '*';
  printf("Podaj wysokosc slupka: ");
  scanf("%i", &wys);
  for (i=0; i<wys; i++)
  {
    printf("%c\n", gwiazdki);
  }
  return 0;
}