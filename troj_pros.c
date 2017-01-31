#include <stdio.h>

int main(void)
{
    unsigned int h, i, j, tmp;
    unsigned int c = 0;
    printf("Podaj wysokosc trojkata: ");
    scanf("%d", &h);
    tmp = h;
    for (i=0; i<h; i++)
    {
        if (i == 0)
        {
            for (j=0; j<tmp; j++)
            {
                printf("*");
                c++;
            }
            printf("\n");
        }
        else
        {
            for (j=0; j<tmp; j++)
            {
                if ((j == 0) || (j == tmp-1))
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
        tmp--;
    }
    printf("\nUzyto %d gwiazdek do narysowania tego trojkata\n", c);
    return 0;
}