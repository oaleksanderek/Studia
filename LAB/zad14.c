#include <stdio.h>

int main()
{
    float pi=3.14;
    float stopnie;

    printf("Podaj liczbe stopni: ");
    scanf("%f", &stopnie);

    if(stopnie<0)
    {
        printf("Kat nie moze byc ujemny!");
    }

    float wynik;

    wynik=(stopnie*pi)/360;

    printf("Kat %f ma %f radianow!",stopnie,wynik);

    return 0;
}
