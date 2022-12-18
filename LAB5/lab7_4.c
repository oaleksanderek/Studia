#include <stdio.h>

void najwieksza(int* wskaz,int roz)
{
    int temp=0;
    
    for(int i=0;i<roz-1;i++)
    {
        if(wskaz[i]>temp)
        {
            temp=wskaz[i];
        }
    }
}

int main()
{
    int tab[]={2,8,1,5,4};
    int* wsk=tab;
    int rozmiar=5;

    najwieksza(wsk,rozmiar);

    return 0;
}