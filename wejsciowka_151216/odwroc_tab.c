#include <stdio.h>
#include <string.h>

void odwroc_tab(char zrodlo[], char cel[])
{
    unsigned int i, j;
    i = 0;
    j = strlen(zrodlo)-1;
    while (i<strlen(zrodlo))
    {
        cel[i] = zrodlo[j];
        j--;
        i++;
    }
}

int main(void)
{
    char *slowo="Ala ma kota";
    char odwroc[20];
    odwroc_tab(slowo, odwroc);
    printf("%s\n", odwroc);
    return 0;
}