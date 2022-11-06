#include <stdio.h>

int main()
{
    int pierwsza;
    int druga;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &pierwsza);

    printf("Podaj druga liczbe: ");
    scanf("%d", &druga);

    int dodawanie = pierwsza+druga;
    int odejmowanie = pierwsza-druga;
    int mnozenie = pierwsza*druga;
    float dzielenie = pierwsza/druga;
    int modulo = pierwsza%druga;

    printf("Wynik dodawania: %i\n", dodawanie);
    printf("Wynik odejmowania: %i\n", odejmowanie);
    printf("Wynik mnozenia: %i\n", mnozenie);
    printf("Wynik dzielenia: %f\n", dzielenie);
    printf("Wynik reszty z dzielenia: %i\n", modulo);

    return 0;
}