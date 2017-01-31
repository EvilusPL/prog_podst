#include <stdio.h>
#include <stdlib.h>
void f(int *a, int *b, int *c)
{
    int buf;
    if(*a>*b)
    {
        buf=*b;
        *b=*a;
        *a=buf;
    }
    if(*b>*c)
    {
        buf=*c;
        *c=*b;
        *b=buf;
    }
    if(*a>*c)
    {
        buf=*c;
        *c=*a;
        *a=buf;
    }
}
int main(void)
{
    int a, b, c;
    printf("Podaj a: ");
    scanf("%d", &a);
    printf("\nPodaj b: ");
    scanf("%d",&b);
    printf("\nPodaj c: ");
    scanf("%d", &c);
    f(&a,&b,&c);
    printf("Podane liczby to: \na=%d, \nb=%d, \nc=%d", a, b, c);
    return 0;
}
