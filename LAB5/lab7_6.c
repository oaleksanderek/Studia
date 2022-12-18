#include <stdio.h>

void funkcja(int* wskaz1,int* wskaz2)
{
    int dlugosc=wskaz2-wskaz1;
    
    for(int i=1;i<=dlugosc;i++)
    {
        wskaz2[dlugosc-i]=i;
    }
    for(int i=dlugosc-1;i>=0;i--)
    {
        printf("%d\t",wskaz2[i]);
    }
}

int main()
{
    int n;
    printf("Podaj n: ");
    scanf("%i",&n);
    int tab[n];
    int* wsk1=tab;
    int* wsk2=&tab[n];

    funkcja(wsk1,wsk2);

    return 0;
}
