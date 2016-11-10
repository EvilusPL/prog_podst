#include<stdio.h>

int min(int *a, int *b, int **w)
{
    if (*a < *b)
    {
        *w = a;
    }
    else
    {
        *w = b;
    }
}

int main(void)
{
    int a, b;
    int *w;
    printf("Podaj a i b: ");
    scanf("%d %d", &a, &b);
    min(&a, &b, &w);
    printf("Mniejsza jest liczba %d\n", *w);
    return 0;
}