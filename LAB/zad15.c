#include <stdio.h>

int main()
{
    int dobra=2;
    int odp;

    printf("Masz 3 szanse! Podaj liczbe z zakresu 1-5: ");
    scanf("%i", &odp);

    if(odp==dobra)
    {
        printf("Brawo, zgadles/as za 1 razem!");
    }
    else
    {
        printf("Pudlo! Masz jeszcze 2 szanse! Podaj liczbe: ");
        scanf("%i", &odp);

        if(odp==dobra)
        {
            printf("Brawo, zgadles/as za 2 razem!");
        }
        else
        {
            printf("Pudlo! Masz jeszcze 1 szanse! Podaj liczbe: ");
            scanf("%i", &odp);

            if(odp==dobra)
            {
                printf("Brawo, zgadles/as za 3 razem!");
            }
            else
            {
                printf("Nie udalo ci sie zgadnac!");
            }
        }
    }


    return 0;
}