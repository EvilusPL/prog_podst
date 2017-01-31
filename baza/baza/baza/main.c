#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct tksiazka
{
    char imie[12];
    char nazwisko[15];
    int nr_tel;
    struct tksiazka * n;
} ksiazka;

int count(ksiazka * lista)
{
    int c = 0;
    while (lista!=NULL)
    {
        c++;
        lista = lista->n;
    }
    return c;
}

void select(ksiazka * lista)
{
    int i = 1;
    printf("Ilosc wierszy: %d\n\n", count(lista));
    while (lista != NULL)
    {
        printf("Wiersz nr %d\n", i);
        printf("Imie: %s\n", lista->imie);
        printf("Nazwisko: %s\n", lista->nazwisko);
        printf("Nr telefonu: %d\n\n", lista->nr_tel);
        i++;
        lista = lista->n;
    }
}

void insert(ksiazka * lista, char imie[], char nazwisko[], int nr_tel)
{
    ksiazka *wsk, *nowy;
    wsk = lista;
    while(wsk->n!=NULL)
    {
        wsk=wsk->n;
    }
    nowy=(ksiazka*)malloc(sizeof(ksiazka));
    strcpy(nowy->imie, imie);
    strcpy(nowy->nazwisko, nazwisko);
    nowy->nr_tel=nr_tel;
    nowy->n=NULL;
    wsk->n=nowy; 
}

void del(ksiazka *lista, int nr_tel)
{
    ksiazka *wsk=lista;
    while(wsk->n!=NULL)
    {
        if(wsk->n->nr_tel == nr_tel)
        {
            ksiazka *tmp=wsk->n;
            wsk->n=tmp->n;
            free(tmp);
        }
        else
        {
            wsk=wsk->n;
        }
    }
}

int main(int argc, char **argv)
{
	ksiazka * l = (ksiazka*)malloc(sizeof(ksiazka));
    insert(l, "Jarosław", "Rauza", 788624702);
    insert(l, "Jan", "Rauza", 698615843);
    insert(l, "Zofia", "Rauza", 683600272);
    select(l);
    del(l, 698615843);
    del(l, 683600272);
    select(l);
    
	return 0;
}
