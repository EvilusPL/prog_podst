#include <stdio.h>

void wczyt_netto(float matrix[][5], int max_y) {
    int i;
    for (i=0; i<max_y; i++) {
        printf("Podaj cene netto towaru %d: ", i+1);
        scanf("%f", &matrix[0][i]);
    }
}

void wczyt_vat(float matrix[][5], int max_y) {
    int i;
    int buf=1;
    for (i=0; i<max_y; i++) {
        buf=1;
        do {
            printf("Podaj stawke VAT towaru %d (dopuszczalne wartosci: 0, 5, 8, 23): ", i+1);
            scanf("%d", &buf);
            if (buf==0 || buf==5 || buf==8 || buf==23) {
                break;
            }
        } while (1==1);
        matrix[1][i]=(float)buf;
    }
}

void oblicz_brutto(float matrix[][5], int max_y) {
    int i;
    for (i=0; i<max_y; i++) {
        matrix[2][i]=matrix[0][i]+(matrix[0][i]*(float)matrix[1][i]/100.0);
    }
}

void wypisz_ceny(float matrix[][5], int max_y) {
    int i, j;
    for (i=0; i<max_y; i++) {
        printf("Towar nr %d. Netto = %6.2f, VAT = %6.0f\%, Cena brutto = %6.2f\n", i+1, matrix[0][i], matrix[1][i], matrix[2][i]);
    }
}

int main(void) {
    float matrix[3][5];
    wczyt_netto(matrix, 5);
    wczyt_vat(matrix, 5);
    oblicz_brutto(matrix, 5);
    wypisz_ceny(matrix, 5);
    return 0;
}