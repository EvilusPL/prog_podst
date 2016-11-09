#include<stdio.h>

int wysokosc(void);
void piramida(int wysokosc);
int main(void);

int wysokosc(void)
{
  int wys;
  printf("Podaj wysokosc piramidy: ");
  scanf("%d", &wys);
  return wys;
}

void piramida(int wysokosc)
{
  int i, j;
  char gwiazdka;
  gwiazdka = '*';
  for (i=0; i<wysokosc; i++)
  {
    for (j=0; j<i+1; j++)
    {
      printf("%c", gwiazdka);
    }
    printf("\n");
  }
}

int main(void)
{
  int wys;
  wys = wysokosc();
  piramida(wys);
  return 0;
}