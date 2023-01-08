#include <stdio.h>
#include <string.h>

typedef struct {
    char imie[20];
    char nazwisko[30];
}Osoba;

int main()
{
    FILE *baza;
    baza=fopen("baza.txt","r");

    char imie[20];
    char nazwisko[30];
    printf("Podaj imie: ");
    scanf("%s",&imie[0]);
    printf("Podaj nazwisko: ");
    scanf("%s",&nazwisko[0]);

    Osoba osoba;

    int znalezione=0;
    while(fscanf(baza,"%s %s",osoba.imie,osoba.nazwisko)==2)
    {
        if(strcmp(osoba.imie,imie)==0 && strcmp(osoba.nazwisko,nazwisko)==0)
        {
            znalezione=1;
            break;
        }
    }

    fclose(baza);

    if(znalezione)
    {
        printf("\nOsoba o podanych danych zostala znaleziona w bazie!");
    }
    else
    {
        printf("\nOsoba o podanych danych NIE zostala znaleziona w bazie!");
    }

    return 0;
}