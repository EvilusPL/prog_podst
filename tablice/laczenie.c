#include <stdio.h>

void polacz(char s[], char d[]) {
    int i, j = 0, k;
    while (d[j] != '\0') {
        j++;
    }
    k = j;
    for (i=0; i<k; i++) {
        d[j]=s[i];
        j++;
    }
}

void polacz2(char *s, char *d) {
    while (*++d!='\0');
    while (*d++=*s++);
}

int main(void) {
    char s[100]="Ala ma kota";
    char d[100]="Wlazl kotek na plotek";
    printf("Przed laczeniem:\n");
    printf("s = %s\n", s);
    printf("d = %s\n", d);
    polacz2(s, d);
    printf("Po laczeniu:\n");
    printf("s = %s\n", s);
    printf("d = %s\n", d);
    return 0;
}