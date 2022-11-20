#include <stdio.h>

int main()
{
    int a,b;

    printf("Podaj naturalna liczbe a: ");
    scanf("%i",&a);
    printf("Podaj naturalna liczbe b: ");
    scanf("%i",&b);

    while(b>1)
    {
        a*=a;
        b--;
    }
    printf("Potega: %i", a);

    return 0;
}