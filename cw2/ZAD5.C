#include<stdio.h>

int wysokosc(void);
void slupek(int wysokosc);
int main(void);

int wysokosc(void)
{
  int wys;
  printf("Podaj wysokosc slupka: ");
  scanf("%d", &wys);
  return wys;
}

void slupek(int wysokosc)
{
  int i;
  for (i=0; i<wysokosc; i++)
  {
    printf("%c\n", '*');
  }
}

int main(void)
{
  int wys;
  wys = wysokosc();
  slupek(wys);
  return 0;
}