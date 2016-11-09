#include<stdio.h>
#include<string.h>

int main(void)
{
  char *napis = "Laboratorium programowania";
  char lg_rog = 201;
  char pg_rog = 187;
  char ld_rog = 200;
  char pd_rog = 188;
  char poz_lin = 205;
  char pion_lin = 186;
  int i;

  printf("%c", lg_rog);
  for (i=0; i<strlen(napis); i++)
  {
    printf("%c", poz_lin);
  }
  printf("%c\n", pg_rog);
  printf("%c", pion_lin);
  printf("%s", napis);
  printf("%c\n", pion_lin);
  printf("%c", ld_rog);
  for (i=0; i<strlen(napis); i++)
  {
    printf("%c", poz_lin);
  }
  printf("%c\n", pd_rog);
  return 0;
}