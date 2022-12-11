#include <stdio.h>

int isElement(int liczba,int tab[],int len)
{
   if(len<0)
   {
       return -1;
   }
   if(tab[len]==liczba)
   {
       return len;
   }
   return isElement(liczba,tab,len-1);
}

int isElementBin(int liczba, int tab[],int l,int p)
{
    if(p>=l)
    {
        int srodek=l+(p-l)/2;
        
        if(tab[srodek]==liczba)
        {
            return srodek;
        }
        if(tab[srodek]>liczba)
        {
            return isElementBin(liczba,tab,l,srodek-1);
        }
        return isElementBin(liczba,tab,srodek+1,p);
    }
    return -1;
}

int main()
{
    int liczba;
    int tab[]={1,13,21,36,52,68,79,87,93,100};
    int len=9;
    printf("Podaj liczbe: ");
    scanf("%i",&liczba);
    
    if(isElement(liczba,tab,len)>=0)
    {
        printf("(Od lewej)Liczba %i jest elementem tablicy!\n",liczba);
    }
    else
    {
        printf("(Od lewej)Liczba %i nie jest elementem tablicy!\n",liczba);
    }
    
    if(isElementBin(liczba,tab,0,len)>0)
    {
        printf("(Binarnie)Liczba %i jest elementem tablicy!\n",liczba);
    }
    else
    {
        printf("(Binarnie)Liczba %i nie jest elementem tablicy!\n",liczba);
    }
    
    return 0;
}
