#include <stdio.h>
#include <string.h>

void odwroc(char tab[])
{
    char a;
    int i, j;
    i = 0;
    while (tab[i]!=0)
    {
        i++;
    }
    if (i>1)
    {
        i -= 1;
        for (j = 0; j<=(i+2)/2; j++)
        {
            a = tab[j];
            tab[j] = tab[i];
            tab[i] = a;
            i--;
        }
    }
}

void odwroc_wsk(char *tab)
{
    char *p;
    char a;
    char *k;
    p = tab;
    k = p;
    while (*k != '\0') k++;
    if (k!=p)
    {
        k--;
        while (p<k)
        {
            a = *p;
            *p = *k;
            *k = a;
            p++;
            k--;
        }
    }
}

/*void odwroc_tab(char zrodlo[], char cel[])
{
    unsigned int i, j;
    i = 0;
    j = strlen(zrodlo)-1;
    if (j <= 1) return;
    while (i<strlen(zrodlo))
    {
        cel[i] = zrodlo[j];
        j--;
        i++;
    }
}
*/
int main(void)
{
    char slowo[20]="Ala ma kota";
    /*char odwroc[20];*/
    odwroc(slowo);
    printf("%s\n", slowo);
    return 0;
}