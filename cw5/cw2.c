#include<stdio.h>
#define MIN 3
#define MAX 15
void wczytaj(int tab[], int dl)
{
    int i;
    for (i=0; i<dl; i++)
    {
        printf("Podaj wage %i towaru (w kg): ", i+1);
        scanf("%d", &tab[i]);
    }
}

void wypisz_tab(int tab[], int dl)
{
    int i;
    for (i=0; i<dl; i++)
    {
        printf("Waga %i towaru (w kg): %i \n", i+1, tab[i]);
    }
}

void wypisz_odbiegajace(int tab[], int dl)
{
    int i;
    for (i=0; i<dl; i++)
    {
        if ((tab[i]<MIN) || (tab[i]>MAX))
        {
            printf("Waga %i towaru (%i kg) odbiega od normy!\n", i+1, tab[i]);
        }
    }
}

void wypisz_srednia(int tab[], int dl)
{
    int i, suma = 0;
    for (i=0; i<dl; i++)
    {
        suma = suma + tab[i];
    }
    suma = suma / dl;
    printf("Srednia waga towarow (w kg): %i\n", suma);
}



int main(void)
{
    int tab[10];
    wczytaj(tab, 10);
    wypisz_tab(tab, 10);
    wypisz_srednia(tab, 10);
    wypisz_odbiegajace(tab, 10);
    return 0;
}