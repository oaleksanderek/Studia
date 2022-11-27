#include <stdio.h>

void dni_do_konca(int d,int m,int r)
{
    int sum=0;
    sum-=d;
    for(int i=m;i<=12;i++)
    {
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
        {
            int dni=31;
            sum+=dni; 
        }
        else if(m==4 || m==6 || m==9 || m==11)
        {
            int dni=30;
            sum+=dni;
        }
        else if(r%4==0 && m==2)
        {
            int dni=29;
            sum+=dni;
        }
        else if(r%4!=0 && m==2)
        {
            int dni=28;
            sum+=dni;
        }
    }
    printf("\nDni do konca roku: %i",sum);
}

int main()
{
    int dzien,miesiac,rok;
    printf("Podaj dzien: ");
    scanf("%i",&dzien);
    printf("Podaj miesiac: ");
    scanf("%i",&miesiac);
    printf("Podaj rok: ");
    scanf("%i",&rok);

    dni_do_konca(dzien,miesiac,rok);

    return 0;
}