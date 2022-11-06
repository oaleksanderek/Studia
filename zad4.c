#include <stdio.h>

int main()
{
    int pierwsza;
    int druga;
    int trzecia;

    printf("Podaj pierwsza liczbe: ");
    scanf("%i", &pierwsza);

    printf("Podaj druga liczbe: ");
    scanf("%i", &druga);

    printf("Podaj trzecia liczbe: ");
    scanf("%i", &trzecia);

    if(pierwsza>druga && pierwsza>trzecia)
    {
        printf("Najwieksza liczba jest: %i", pierwsza);
    }
    else if (druga>pierwsza && druga>trzecia)
    {
        printf("Najwieksza liczba jest: %i", druga);
    }
    else if (trzecia>pierwsza && trzecia>druga)
    {
        printf("Najwieksza liczba jest: %i", trzecia);
    }
    else
    {
        printf("Liczby sa takie same!");
    }
    
    return 0;
}