#include<stdio.h>

int main(void)
{
  int i,s,t,sz,wys,bl;
  char* gwiazdki;
  gwiazdki = "***";
  sz = 27;
  wys = 16;
  bl = 3;
  for (i=1; i<=wys; i++)
  {
      for (s=0; s<bl; s++)
      {
        for (t=0; t<sz; t++)
	{
	  if (i%2 != 0)
	  {
	    printf("%s   ", gwiazdki);
	  }
	  else
	  {
	    printf("   %s", gwiazdki);
	  }
	}
	printf("\n");
      }
   }
  return 0;
}
