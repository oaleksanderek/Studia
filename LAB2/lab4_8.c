#include <stdio.h>


int main()
{
    /*Napisz program który dla podanej pary liczb a,b 
    zwroci b liczb pierwszych wiekszych lub rownych a.

    Przyklad:
    
        input:
        a=5 i b=3
        
        output:
        trzy(b) liczby pierwsze wieksze badz rowne 5(a)
        7,11,13
    
    */
    int a,b;
    int pierwsza=0;
    int temp=0;
    printf("Podaj liczbe a: ");
    scanf("%i", &a);
    printf("Podaj liczbe b: ");
    scanf("%i", &b);
    int tab[b];

    for(int i=a;pierwsza<b;i++)
    {
        temp=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                temp++;
            }
        }
        if(!temp)
        {
            tab[pierwsza]=i;
            pierwsza++;
        }
    }
    printf("%i liczb pierwszych wiekszych lub rownych %i:\n",b,a);
    for(int i=0;i<b;i++)
    {
        printf("%i ",tab[i]);
    }

    return 0;
}