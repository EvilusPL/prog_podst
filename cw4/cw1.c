#include<stdio.h>

void dzialania(int a, int b, int *sum, int *roz, int *ilo)
{
	*sum=a+b;
	*roz=a-b;
	*ilo=a*b;
}


int main(void)
{
	int a,b,sum,roz,ilo;
	printf("Podaj pierwsza liczbe: ");
	scanf("%d", &a);
	printf("Podaj druga liczbe: ");
	scanf("%d", &b);
	dzialania(a,b,&sum,&roz,&ilo);
	printf("Suma dwoch liczb wynosi: %d\n", sum);
	printf("Roznica dwoch liczb wynosi: %d\n", roz);
	printf("Iloczyn dwoch liczb wynosi: %d\n", ilo);
	return(0);
}
