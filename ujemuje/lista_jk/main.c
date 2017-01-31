#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct el_db
{
    float f;
    int i;
    char c[100];
    struct el_db *next;
} el;

int dodaj(float f, int i, char c[], el **element)
{
    el *nowy;
    nowy = malloc(sizeof(el));
    if (nowy!=NULL)
    {
        nowy->f=f;
        nowy->i=i;
        strcpy(nowy->c, c);
        nowy->next=*element;
        *element = nowy;
        return 1;
    }
    else
    {
        printf("Brak pamięci na nowy element listy!\n"); 
        return 0;
    }
}

void usun(el **element)
{
    el *tmp;
    if (*element!=NULL)
    {
       tmp = *element;
       *element=tmp->next;
       free(tmp); 
    }
}

void wypisz(el *element)
{
    while (element!=NULL)
    {
        printf("f = %f, i = %d, c = %s\n", element->f, element->i, element->c);
        element=element->next;
    }
}

int main(int argc, char **argv)
{
    el *start = NULL;
    if (dodaj(100.0, 100, "Damian", &start) && dodaj(200.0, 200, "Krzysztof", &start))
    {
       wypisz(start);
       printf("\n"); 
       if (dodaj(300.0, 300, "Jarosław", &start))
       {
           wypisz(start);
       }
       else
       {
           return 1;
       }
       usun(&start);
       printf("\n");
       wypisz(start);
    }
    else
    {
        return 1;
    }
	return 0;
}
