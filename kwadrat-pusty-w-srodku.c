#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i, j;
    printf("Podaj kolumny: \n");
    scanf("%d", &a);
    printf("Podaj wiersze: \n");
    scanf("%d", &b);
    for(i=1;i<=a;i++)
        {
            for(j=1;j<=b;j++)
            {
                if(i==1 || i==a || j==1 || j==b)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }


    return (2*i+2*j-8);
}
