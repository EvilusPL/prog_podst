#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void pauza(void)
{ system("pause");
}

void wypisanie(void)
{ printf("\nTrzy i pol najwazniejszych zadady pracy ze wskaznikami:");
printf("\n\n1. Deklaracja wskaznika: typ *nazwa_zmiennej_wskaznikowej");
printf("\n np: wskaznik na float o nazwie wsk_p deklaruje sie float *wsk_p");
printf("\n np: wskaznik na int o nazwie i_p deklarije sie int *i_p");
pauza();
printf("\n\n2. *nazwa_zmiennej_wskaznikowej oznacza zawartosc komorki,");
printf("\n wskazywanej przez wskaznik,");
printf("\n np: *i_p to zawartosc komorki wskazywanej przez i_p");
pauza();
printf("\n\n3. i_p oznacza adres, przechowywany przez wskaznik, np. 01AF:14E2");
pauza();
printf("\n\n\xAB. & pozwala okreslic adres zmiennej:");
printf("\n np: &i pozwala okreslic w ktorej komorce pamieci jest i");
pauza();
printf("\n\n Najczestszym bledem studentow jest przekonanie, ze w deklaracji");
printf("\nint *i_p; typ zmiennej to int, a jej nazwa to *i_p - a tak nie jest");
printf("\n typ zmiennej to int * a nazwa zmiennej to i_p");
printf("\n");
pauza();
}

void przyklad(void)
{ int *i_p;
int i;
float x;
float *wsk_p;printf("\n Przyklad programu, operujacego na wskaznikach");
printf("\n\nMamy zmienne: int i oraz float x, nadajemy im wartosci.");
printf("\nPodaj wartosc zmiennej i (calkowita): ");
scanf("%d",&i);
printf("\nPodaj wartosc zmiennej x (rzeczywista): ");
scanf("%f",&x);
printf("\nPodane wartosci to %d oraz %.2f",i,x);
pauza();
printf("\n\nSprawdzimy pod jakimi adresami sa te zmienne");
printf("\nZmienna i jest pod adersem %p, zmienna x pod adresem %p",&i,&x);
pauza();
printf("\n\nNadamy wartosci tych adresow zmiennym wskaznikowym i_p oraz wsk_p");
printf("\nza pomoca operacji i_p=&i oraz wsk_p=&x");
i_p=&i;
wsk_p=&x;
pauza();
printf("\n\nWypiszemy teraz wartosci zmiennych wskaznikowych ");
printf("\noraz zawartosc komorek, na ktore wskazuja");
printf("\n\nZmienna i_p ma wartosc %p, zmienna wsk_p ma wartosc %p",i_p,wsk_p);
pauza();
printf("\n\nWartosc wyrazenia *i_p (zawartosc komorki, na ktora wskazuje i_p) to %d",*i_p);
pauza();
printf("\n\nWartosc wyrazenia *wsk_p (zawartosc komorki, na ktora wskazuje wsk_p) to %.2f",*wsk_p);
pauza();
printf("\n\nWartosc wyrazenia *i_p powinna byc taka sama jak wartosc zmiennej i");
printf("\nponiewaz ustawilismy wskaznik i_p by wskazywal komorke, w ktorej jest i");
pauza();
printf("\n\nTak samo powinno byc z *wsk_p i x");
pauza();
}

char menu(void)
{
	char lg=201;
	char pozl=205;
	char pg=187;
	char pionl=186;
	char ld=200;
	char pd=188;
	char ll=204;
	char lp=185;
	int i;
	char* napisy[6];
	char wyb;
    for (i=0; i<25; i++)
	{
		printf("\n");
	}
	napisy[0]="  Przyklad programu wykorzystujacy menu  ";
	napisy[1]=" Wybierz:";
	napisy[2]=" w - wypisanie 3.5 najwazniejszych zasad";
	napisy[3]=" p - przyklad programu";
	napisy[4]=" k - koniec pracy";
	napisy[5]="Twoj wybor:";
	printf("%c", lg);
	for (i=0; i<strlen(napisy[0]); i++)
	{
		printf("%c", pozl);
	}
	printf("%c\n", pg);
	printf("%c", pionl);
	printf("%s", napisy[0]);
	printf("%c\n", pionl);
	printf("%c", ll);
	for (i=0; i<strlen(napisy[0]); i++)
	{
		printf("%c", pozl);
	}
	printf("%c\n", lp);
	printf("%c", pionl);
	printf("%s", napisy[1]);
	for (i=0; i<strlen(napisy[0])-strlen(napisy[1]); i++)
	{
		printf(" ");
	}
	printf("%c\n", pionl);
	printf("%c", pionl);
	printf("%s", napisy[2]);
	for (i=0; i<strlen(napisy[0])-strlen(napisy[2]); i++)
	{
		printf(" ");
	}
	printf("%c\n", pionl);
	printf("%c", pionl);
	printf("%s", napisy[3]);
	for (i=0; i<strlen(napisy[0])-strlen(napisy[3]); i++)
	{
		printf(" ");
	}
	printf("%c\n", pionl);
	printf("%c", pionl);
	printf("%s", napisy[4]);
	for (i=0; i<strlen(napisy[0])-strlen(napisy[4]); i++)
	{
		printf(" ");
	}
	printf("%c\n", pionl);
	printf("%c", ld);
	for (i=0; i<strlen(napisy[0]); i++)
	{
		printf("%c", pozl);
	}
	printf("%c\n", pd);
  printf("%s", napisy[5]);
	while (0==0)
	{
		wyb=getchar();
		if ((wyb == 'w' || wyb == 'W' || wyb == 'p' || wyb == 'P' || wyb == 'k' || wyb == 'K')) break;
	}
	return wyb;
}

int main(void)
{
	char wyb;
	wyb = menu();
	switch (wyb)
	{
		case 'w':
        case 'W':
			wypisanie();
			break;
		case 'p':
        case 'P':
			przyklad();
			break;
		case 'k':
        case 'K':
			break;
		default:
			printf("Co ty wybrales?\n");
			break;
	}
	return 0;
}
