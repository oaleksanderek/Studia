#include <stdio.h>

int przekroj(int a1,int a2,int b1,int b2)
{
    if(a1<a2 && b1>a2)
    {
        return a2;
    }
    else if(a1<a2 && b1<a2)
    {
        return -1;
    }
    else if(a2<a1 && b1<b2)
    {
        return a1;
    }
}

int main()
{
    int a1,b1,a2,b2;

    printf("Podaj dwie liczby naturalne a1,b1: ");
    scanf("%i %i",&a1,&b1);
    printf("Podaj dwie liczby naturalne a2,b2: ");
    scanf("%i %i",&a2,&b2);

    printf("%i",przekroj(a1,a2,b1,b2));
}