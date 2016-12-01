#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, h;
    printf("Podaj wysokosc trojkata: ");
    scanf("%d", &h);
    for (i=0; i<h; i++)
    {
        for (k=0; k<h-i-1; k++)
        {
            printf(" ");
        }
        if (i<h-1)
        {
            for (j=0; j<(i+1)*2; j++)
            {
                if (j==0 || j==((i+1)*2)-1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        else
        {
            for (j=0; j<(i+1)*2; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
