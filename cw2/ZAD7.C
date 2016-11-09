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
  int i, j, k;
  char gwiazdka;
  gwiazdka = '*';
  for (i=0; i<wysokosc; i++)
  {
    for (k=0; k<wysokosc-i-1; k++)
    {
      printf(" ");
    }
    for (j=0; j<(i+1)*2; j++)
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
