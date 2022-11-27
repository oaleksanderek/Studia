#include <stdio.h>

void znak_napisu(char napis[], int i)
{
    printf("I-ty znak napisu to: %c\n",napis[i]);
}

int main()
{
    int i;
    char napis[50];
    printf("Podaj napis: ");
    scanf("%[^\n]s",napis);
    printf("Podaj liczbe i: ");
    scanf("%i",&i);

    znak_napisu(napis,i);

    return 0;
}