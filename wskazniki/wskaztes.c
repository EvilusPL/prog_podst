#include<stdio.h>

int f_3(int *Suma, int *Roznica)
{
    int a, b;
    a = *Suma;
    b = *Roznica;
    *Suma = a+b;
    *Roznica = a-b;
    return(a * b);
}

int main(void)
{
    int a, b, c;
    printf("Podaj a i b: ");
    scanf("%d %d", &a, &b);
    c = f_3(&a, &b);
    printf("Suma = %d, Roznica = %d, Iloczyn = %d\n", a, b, c);
    return 0;
}