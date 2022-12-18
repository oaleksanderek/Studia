#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10];
    int *wsk;
    for(int i=0;i<10;i++)
    {
        printf("Podaj liczby do tablicy: ");
        scanf("%i",&tab[i]);
    }
    system("clear");
    printf("Tablica za pomoca wskaznikow:");
    for(int i=0;i<10;i++)
    {
        wsk=&tab[i];
        printf("%i\t",*wsk);
    }

    return 0;
}