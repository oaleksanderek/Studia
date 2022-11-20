#include <stdio.h>

int main()
{
    int n;
    int i=1;
    int suma=0,przechodnia;

    printf("Podaj liczbe naturalna n: ");
    scanf("%i", &n);

    while(n>=1)
    {
       przechodnia=i*i;
       suma+=przechodnia;
       przechodnia=0;
       i+=1;
       n-=1;
    }
    printf("Suma kwadratów liczb naturalnych od 1 do n to: %i", suma);

    return 0;
}
