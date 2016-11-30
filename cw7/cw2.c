#include <stdio.h>
#define N 6
struct okrety {
    char bandera[20];
    unsigned int wypornosc;
    unsigned int czy_sprawny;
} okret[N];

int main(void) {
    int i, sum_wypor = 0, sum_wypor_spr = 0;
    for (i=0; i<N; i++) {
        printf("Podaj bandere statku #%d: ", i+1);
        scanf("%s", &okret[i].bandera);
        printf("Podaj wypornosc statku #%d: ", i+1);
        scanf("%d", &okret[i].wypornosc);
        printf("Czy statek #%d jest sprawny? [1-tak, 0-nie]: ", i+1);
        scanf("%d", &okret[i].czy_sprawny);
    }
    for (i=0; i<N; i++) {
        printf("\nDane statku #%d\n", i+1);
        printf("Bandera: %s\n", okret[i].bandera);
        printf("Wypornosc: %d ton\n", okret[i].wypornosc);
        if (okret[i].czy_sprawny) {
            printf("Czy sprawny: TAK\n");
        }
        else {
            printf("Czy sprawny: NIE\n");
        }
    }
    printf("\nWypisuje dane niesprawnych statkow:\n");
    for (i=0; i<N; i++) {
        if (okret[i].czy_sprawny == 0) {
            printf("\nDane statku #%d\n", i+1);
            printf("Bandera: %s\n", okret[i].bandera);
            printf("Wypornosc: %d ton\n", okret[i].wypornosc);
        }
    }
    printf("\nSuma wypornosci wszystkich statkow wynosi ");
    for (i=0; i<N; i++) {
        sum_wypor=sum_wypor+okret[i].wypornosc;
    }
    printf("%d ton\n", sum_wypor);
    printf("\nSuma wypornosci sprawnych statkow wynosi ");
    for (i=0; i<N; i++) {
        if (okret[i].czy_sprawny) {
            sum_wypor_spr=sum_wypor_spr+okret[i].wypornosc;
        }
    }
    printf("%d ton\n", sum_wypor_spr);
    return 0;
}