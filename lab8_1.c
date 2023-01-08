#include <stdio.h>

int main()
{
    int tab[100];
    int najwieksza;
    FILE *liczby;
    liczby = fopen("liczby.txt","r");

    for(int i=0;i<100;i++)
    {
        if(feof(liczby)) break;
        fscanf(liczby,"%i",&tab[i]);
    }
    najwieksza=tab[0];
    for(int j=1;j<99;j++)
    {
        if(najwieksza<tab[j])
        {
            najwieksza=tab[j];
        }
    }
    printf("\nNajwieksza liczba z pliku to: %i\n",najwieksza);

    return 0;
}