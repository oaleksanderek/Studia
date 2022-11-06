#include <stdio.h>

int main()
{
    int x1,x2,y1,y2;

    printf("Podaj wspolrzedna X pierwszego wierzcholka: ");
    scanf("%i", &x1);

    printf("Podaj wspolrzedna Y pierwszego wierzcholka: ");
    scanf("%i", &y1);

    printf("Podaj wspolrzedna X drugiego wierzcholka: ");
    scanf("%i", &x2);

    printf("Podaj wspolrzedna Y drugiego wierzcholka: ");
    scanf("%i", &y2);

    int a=x1-x2;
    int b=y1-y2;

    int pole=a*b;
    int obw=(2*a)+(2*b);

    printf("Pole prostokata wynosi: %i\n", pole);
    printf("Obwod prostokata wynosi: %i\n", obw);

    return 0;
}