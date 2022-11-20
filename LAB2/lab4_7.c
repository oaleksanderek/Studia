#include <stdio.h>

int main()
{
    int n,spr;
    printf("Podaj liczbe, aby sprawdzic czy jest pierwsza: ");
    scanf("%i", &n);

    if(n<2)
    {
        printf("Liczba %i nie jest liczba pierwsza!\n",n);
    }
    else if(n==2 || n==3)
    {
        printf("Liczba %i jest liczba pierwsza!\n",n);
    }

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            spr=0;
        }
        else
        {
            spr=1;
        }
    }

    if(spr==0)
    {
        printf("Liczba %i nie jest liczba pierwsza!\n",n);
    }
    else if(spr==1)
    {
        printf("Liczba %i jest liczba pierwsza!\n",n);
    }

    return 0;
}