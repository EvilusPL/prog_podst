#include<stdio.h>

int main(void)
{
    int tab[3];
    int i, suma = 0;
    for (i=0; i<3; i++)
    {
        printf("Podaj %i liczbe: ", i+1);
        scanf("%d", tab[i]);
    }
    for (i=0; i<3; i++)
    {
        suma = suma + tab[i];
    }
    suma = suma / 3;
    printf("Srednia arytmetyczna tych liczb wynosi %d\n", suma);
    return 0;
}