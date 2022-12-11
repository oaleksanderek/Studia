#include <stdio.h>

int rek(int n){
    if(n<2)
    {
        return 1;
    }
    else
    {
        return n*rek(n-1);
    }
}

int main()
{
    int n;
    
    printf("Podaj liczbe n: ");
    scanf("%i",&n);
    
    printf("Silnia to: %i",rek(n));

    return 0;
}
