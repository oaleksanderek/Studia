#include <stdio.h>

int main()
{
    int pierwsza;
    int druga;

    printf("Podaj pierwsza liczbe: ");
    scanf("%i", &pierwsza);

    printf("Podaj druga liczbe: ");
    scanf("%i", &druga);

    if (pierwsza>druga)
    {
        printf("Wieksza liczba jest: %i", pierwsza);
    }
    else if(druga>pierwsza)
    {
        printf("Wieksza liczba jest: %i", druga);
    }
    else
    {
        printf("Liczby sa takie same!");
    }

    return 0;
}