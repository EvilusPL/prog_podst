#include <stdio.h>

void kopiuj(char tab1[], char *tab2) {
    int i = 0;
    while (tab1[i]!='\0') {
        tab2[i]=tab1[i];
        i++;
    }
    tab2[i]='\0';
}

void kopiuj2(char *tab1, char *tab2) {
    while (*tab2++=*tab1++);
    /* while (*tab1!='\0') { */
        /* *tab2++=*tab1++; */
        /* *tab1++; */
        /* *tab2++; */
    /* } */
    /* *tab2='\0'; */
}

int main(void) {
    char s[100] = "Ala ma kota";
    char d[100];
    printf("Przed kopiowaniem:\n");
    printf("s = %s\n", s);
    printf("d = %s\n", d);
    kopiuj2(&s, &d);
    printf("Po kopiowaniu:\n");
    printf("s = %s\n", s);
    printf("d = %s\n", d);
    return 0;
}