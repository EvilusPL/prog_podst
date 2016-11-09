#include<stdio.h>

void wczytaj(int *x1, int *x2) {
    printf("Podaj x1: ");
    scanf("%d", x1);
    printf("Podaj x2: ");
    scanf("%d", x2);
}

void wypisz(int x1, int x2) {
    printf("x1 = %d\n", x1);
    printf("x2 = %d\n", x2);
}

int main(void) {
    int x1, x2;
    wczytaj(&x1, &x2);
    wypisz(x1, x2);
    return 0;
}