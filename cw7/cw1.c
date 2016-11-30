#include <stdio.h>
#define N 5

struct zwierzeta {
    char imie[20];
    char gatunek[25];
    int wiek;
    int czy_szczepione;
} zwierze[N];

int main(void) {
    int i;
    for (i=0; i<N; i++) {
        printf("Podaj imie zwierzecia #%d: ", i+1);
        scanf("%s", &zwierze[i].imie);
        printf("Podaj nazwe gatunku zwierzecia #%d: ", i+1);
        scanf("%s", &zwierze[i].gatunek);
        printf("Podaj wiek zwierzecia #%d: ", i+1);
        scanf("%d", &zwierze[i].wiek);
        printf("Czy zwierze #%d bylo szczepione? [1 - tak, 0 - nie]: ", i+1);
        scanf("%d", &zwierze[i].czy_szczepione);
    }
    for (i=0; i<N; i++) {
        printf("\nDane zwierzecia #%d:\n", i+1);
        printf("Imie: %s\n", zwierze[i].imie);
        printf("Gatunek: %s\n", zwierze[i].gatunek);
        printf("Wiek: %d\n", zwierze[i].wiek);
        if (zwierze[i].czy_szczepione) {
            printf("Czy szczepione: TAK\n");
        }
        else {
            printf("Czy szczepione: NIE\n");
        }
    }
    return 0;
}