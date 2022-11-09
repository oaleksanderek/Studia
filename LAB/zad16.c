#include <stdio.h>

int main()
{
    int odp1,odp2,odp3,odp4;
    int suma=15;

    printf("Masz 4 szanse! Podaj liczbe z zakresu 1-5: ");
    scanf("%i", &odp1);

    suma=suma-odp1;

    printf("Pudlo! Masz jeszcze 3 szanse! Podaj liczbe: ");
    scanf("%i", &odp2);

    suma=suma-odp2;

    printf("Pudlo! Masz jeszcze 2 szanse! Podaj liczbe: ");
    scanf("%i", &odp3);

    suma=suma-odp3;

    printf("Pudlo! Masz jeszcze 1 szanse! Podaj liczbe: ");
    scanf("%i", &odp4);

    suma=suma-odp4;

    printf("Nie zgadles liczby! Poprawna odpowiedz to: %i", suma);

    return 0;
}