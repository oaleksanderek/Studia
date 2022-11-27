#include <stdio.h>

int sprawdz(char x,char y)
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
    char a,b;
    printf("Podaj pierwszy znak: ");
    scanf("%c",&a);
    printf("Podaj drugi znak: ");
    scanf("%c",&b);

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