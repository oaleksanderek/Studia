#include <stdio.h>

int main()
{
    int n,liczba=0;
    printf("Podaj liczbe n: ");
    scanf("%i", &n);

    int tab[n];
    for(int i=1; i<=n; i++)
    {
        printf("Podaj liczbe: ");
        scanf("%i",&liczba);
        tab[i]=liczba;
    }

    return 0;
}