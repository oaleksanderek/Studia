#include <stdio.h>

int main()
{
    int odc1,odc2,odc3;
    
    printf("Podaj pierwszy odcinek: ");
    scanf("%i", &odc1);

    printf("Podaj drugi odcinek: ");
    scanf("%i", &odc2);

    printf("Podaj trzeci odcinek: ");
    scanf("%i", &odc3);

    int sum1=odc2+odc3;
    int sum2=odc3+odc1;
    int sum3=odc1+odc2;

    if(sum1>odc1)
    {
        printf("Trojkat moze zostac utworzony!");
    }
    else if(sum2>odc2)
    {
        printf("Trojkat moze zostac utworzony!");
    }
    else if(sum3>odc3)
    {
        printf("Trojkat moze zostac utworzony!");
    }
    else
    {
        printf("Trojkat NIE moze zostac utworzony!");
    }


    return 0;
}