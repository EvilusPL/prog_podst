#include <stdio.h>

void max_num(int a, int b, int *wyjscie)
{
    if (a>b)
    {
        *wyjscie = a;
    }
    else
    {
        *wyjscie = b;
    }
}

int main(void)
{
    int wyj;
    max_num(3,4,&wyj);
    printf("%d\n", wyj);
    max_num(2137,1488,&wyj);
    printf("%d\n", wyj);
    return 0;
}