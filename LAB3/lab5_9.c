#include <stdio.h>

int przystepny(int x)
{
    if(x%4==0)
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
    int rok;
    printf("Podaj rok: ");
    scanf("%i",&rok);

    if(przystepny(rok)==1)
    {
        printf("Podany rok jest przystepny!");
    }
    else
    {
        printf("Podany rok nie jest przystepny!");
    }

    return 0;
}