#include <stdio.h>

void dodawanie(int x,int y)
{
    printf("Wynik dodawania to: %i\n",x+y);
}
void odejmowanie(int x,int y)
{
    printf("Wynik odejmowania to: %i\n",x-y);
}
void mnozenie(int x,int y)
{
    printf("Wynik mnozenia to: %i\n",x*y);
}
void dzielenie(int x,int y)
{ 
    if(y==0)
    {
        printf("Nie mozna dzielic przez 0!\n");
    }
    else if(x%y==0)
    {
        printf("Wynik dzielenia to: %i\n",x/y);
    }
    else
    {
        int reszta=x%y;
        printf("Wynik dzielenia to: %i i %i reszty\n",x/y,reszta);
    }
}

int main()
{
    int a,b,wybierz;
    printf("Podaj liczbe a: ");
    scanf("%i",&a);
    printf("Podaj liczbe b: ");
    scanf("%i",&b);
    printf("\n");

    printf("1.Dodawanie.\n");
    printf("2.Odejmowanie.\n");
    printf("3.Mnozenie.\n");
    printf("4.Dzielenie.\n");
    printf("Wybierz dzialanie: ");
    scanf("%i",&wybierz);

    switch(wybierz)
    {
        case 1:
            dodawanie(a,b);
            break;
        case 2:
            odejmowanie(a,b);
            break;
        case 3:
            mnozenie(a,b);
            break;
        case 4:
            dzielenie(a,b);
            break;
    }

    return 0;
}