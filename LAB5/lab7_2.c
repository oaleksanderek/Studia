#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[10];
    for(int i=0;i<10;i++)
    {
        printf("Podaj liczby do tablicy: ");
        scanf("%d",&*(tab+i));
    }
    system("clear");
    printf("Tablica za pomoca wskaznikow:");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",*&*(tab+i));
    }

    return 0;
}
