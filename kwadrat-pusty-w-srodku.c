#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i, j, c = 0;
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
                    c++;
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    printf("Uzyto %d gwiazdek do narysowania tej figury\n", %c);
    return 0;
}
