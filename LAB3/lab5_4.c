#include <stdio.h>
#include <string.h>

int main()
{
    char napis1[20];
    int rozmiar,j=0,spr;
    printf("Podaj wyraz do 20 znakow: ");
    scanf("%s",napis1);

    rozmiar=strlen(napis1);

    for(int i=rozmiar;i>0;i--)
    {
        if(napis1[j]==napis1[i-1])
        {
            spr=1;
        }
        else
        {
            spr=0;
        }
        j++;
    }
    if(spr==1)
    {
        printf("Wyraz jest palindromem!");
    }
    else if(spr==0)
    {
        printf("Wyraz nie jest palindromem!");
    }

    return 0;
}