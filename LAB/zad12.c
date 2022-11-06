#include <stdio.h>

int main()
{
    int liczba;

    printf("Prosze podac liczbe: ");
    scanf("%i", &liczba);

    int reszta2,reszta3,reszta4,reszta5,reszta6;

    reszta2=liczba%2;
    reszta3=liczba%3;
    reszta4=liczba%4;
    reszta5=liczba%5;
    reszta6=liczba%6;

    if(reszta2==0)
    {
        printf("Liczba %i jest podzielna przez 2!", liczba);
    }
    else if(reszta3==0)
    {
        printf("Liczba %i jest podzielna przez 3!", liczba);
    }
    else if(reszta3==0)
    {
        printf("Liczba %i jest podzielna przez 4!", liczba);
    }
    else if(reszta5==0)
    {
        printf("Liczba %i jest podzielna przez 5!", liczba);
    }
    else if(reszta6==0)
    {
        printf("Liczba %i jest podzielna przez 6!", liczba);
    }
    else
    {
        printf("Liczba %i NIE jest podzielna przez liczby w przedziale 2-6!", liczba);
    }

    return 0;
}
