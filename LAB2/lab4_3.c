#include <stdio.h>

int main()
{
    int a,b,c=1;
    
    printf("Podaj liczbe a: ");
    scanf("%i",&a);
    printf("Podaj liczbe b: ");
    scanf("%i",&b);

    int suma=a;
    while(suma<=b)
    {
        suma*=a;
        c++;
    }
    printf("Liczba c: %i",c);

    return 0;
}