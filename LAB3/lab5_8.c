#include <stdio.h>
//31 dni: 1,3,5,7,8,10,12
//30 dni: 4,6,9,11
//28,29 dni: 2
int sprawdz(int dzien,int miesiac, int rok)
{
    if((miesiac==1 || miesiac==3 || miesiac==5 || miesiac==7 || miesiac==8 || miesiac==10 || miesiac==12) && dzien>0 && dzien<=31)
    {
        return 1;
    }
    else if((miesiac==4 || miesiac==6 || miesiac==9 || miesiac==11) && dzien>0 && dzien<=30)
    {
        return 1;
    }
    else if(rok%4==0 && miesiac==2 && dzien>0 && dzien<=29)
    {
        return 1;
    }
    else if(rok%4!=0 && miesiac==2 && dzien>0 && dzien<=28)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}



int main()
{
    int d,m,r;
    printf("Podaj dzien: ");
    scanf("%i",&d);

    printf("Podaj miesiac: ");
    scanf("%i",&m);

    printf("Podaj rok: ");
    scanf("%i", &r);

    if(sprawdz(d,m,r)==1)
    {
        printf("Data jest poprawna!\n");
    }
    else
    {
        printf("Data nie jest poprawna!\n");
    }

    return 0;
}