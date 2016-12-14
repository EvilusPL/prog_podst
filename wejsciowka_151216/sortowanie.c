#include <stdio.h>

void sortuj(int a, int b, int c, int tab[])
{
    int pom;
    if (a>b)
    {
        pom = b;
        b = a;
        a = pom;
    }
    if (a>c)
    {
        pom = c;
        c = a;
        a = pom;
    }
    if (b>c)
    {
        pom = c;
        c = b;
        b = pom;
    }
	tab[0] = a;
	tab[1] = b;
	tab[2] = c;
}

int main(void)
{
    int tablica[3], i;
    sortuj(6,3,4, tablica);
    for (i=0; i<3; i++)
    {
        printf("%d ", tablica[i]);
    }
    printf("\n");
    return 0;
}
