#include <stdio.h>

void wczyt_netto(float netto[], int ile_towarow)
{
    int i;
    for (i=0; i<ile_towarow; i++)
    {
        printf("Podaj cene netto towaru %d: ", i+1);
        scanf("%f", &netto[i]);
    }
}

void wczyt_vat(int vat[], int ile_towarow)
{
    int i;
    int buf=1;
    for (i=0; i<ile_towarow; i++)
    {
        buf=1;
        do
        {
            printf("Podaj stawke VAT towaru %d (dopuszczalne wartosci: 0, 5, 8, 23): ", i+1);
            scanf("%d", &buf);
            if (buf==0 || buf==5 || buf==8 || buf==23)
            {
                break;
            }
        } while (1==1);
        vat[i]=buf;
    }
}

void oblicz_brutto(float netto[], int vat[], float ceny[], int ile_towarow)
{
    int i;
    for (i=0; i<ile_towarow; i++)
    {
        ceny[i]=netto[i]+(netto[i]*(float)vat[i]/100.0);
    }
}

void wypisz_ceny(float ceny[], int ile_towarow)
{
    int i;
    for (i=0; i<ile_towarow; i++)
    {
        printf("Cena towaru %d wynosi: %f zl\n", i+1, ceny[i]);
    }
}

int main(void)
{
    int i;
    printf("Podaj ilosc towarow: ");
    scanf("%d", &i);
    float netto[i];
    int vat[i];
    float ceny[i];
    wczyt_netto(netto, i);
    wczyt_vat(vat, i);
    oblicz_brutto(netto, vat, ceny, i);
    wypisz_ceny(ceny, i);
    return 0;
}