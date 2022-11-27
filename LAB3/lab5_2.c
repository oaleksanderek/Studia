#include <stdio.h>

int sprawdz(int x,int y)
{
    if(x==y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a,b;
    printf("Podaj pierwsza liczbe: ");
    scanf("%i",&a);
    printf("Podaj druga liczbe: ");
    scanf("%i",&b);

    if(sprawdz(a,b)==1)
    {
        printf("Znaki sa identyczne!");
    }
    else
    {
        printf("Znaki nie sa identyczne!");
    }

    return 0;
}