/*
 ============================================================================
 Name        : list3cw1.c
 Author      : Jarosław Rauza
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int wysokosc(void) {
	unsigned int h;
	printf("Podaj wysokosc: ");
	scanf("%d", &h);
	return h;
}

void slupek(unsigned int wysokosc) {
	unsigned int i;
	for (i=0; i<wysokosc; i++) {
		printf("*\n");
	}
}

int main(void) {
	unsigned int h;
	h = wysokosc();
	slupek(h);
	return 0;
}
