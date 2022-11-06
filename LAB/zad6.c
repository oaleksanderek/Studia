#include <stdio.h>

int main()
{
    int rok;

    printf("Podaj rok: ");
    scanf("%i", &rok);

    rok = rok%4;
    

    if(rok==0)
    {
        printf("Rok jest przystepny!");
    }
    else
    {
        printf("Rok NIE jest przystepny!");
    }

    return 0;
}
