#include <stdio.h>

int main()
{
    int odc1,odc2,odc3;

    printf("Podaj dlugosc pierwszego odcinka: ");
    scanf("%i", &odc1);

    printf("Podaj dlugosc drugiego odcinka: ");
    scanf("%i", &odc2);

    printf("Podaj dlugosc trzeciego odcinka: ");
    scanf("%i", &odc3);

    int kw1,kw2,kw3;

    kw1=odc1*odc1;
    kw2=odc2*odc2;
    kw3=odc3*odc3;

    int sum1,sum2,sum3;

    sum1=kw2+kw3;
    sum2=kw1+kw3;
    sum3=kw1+kw2;

    if(sum1==kw1)
    {
        printf("Z tych odcinkow mozna utworzyc trojkat prostokatny!");
    }
    else if(sum2==kw2)
    {
        printf("Z tych odcinkow mozna utworzyc trojkat prostokatny!");
    }
    else if(sum3==kw3)
    {
        printf("Z tych odcinkow mozna utworzyc trojkat prostokatny!");
    }
    else
    {
        printf("Z tych odcinkow NIE mozna utworzyc trojkat prostokatny!");
    }

    return 0;
}
