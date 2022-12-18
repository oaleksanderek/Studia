#include <stdio.h>

int global;

void liczby(int a,int b)
{
    printf("Adres z funkcji lokal: %p\n",&a);
    printf("Adres z funkcji global: %p\n",&b);
}

int main()
{
    int lokal;
    lokal=global;
    printf("Adres lokal: %p\n",&lokal);
    printf("Adres global: %p\n",&global);

    liczby(lokal,global);

    return 0;
}