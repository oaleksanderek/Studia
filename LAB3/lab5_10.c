#include <stdio.h>

void ile_dni(int m,int r)
{
    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
    {
        int dni=31;
        printf("%i miesiac ma %i dni!",m,dni);
    }
    else if(m==4 || m==6 || m==9 || m==11)
    {
        int dni=30;
        printf("%i miesiac ma %i dni!",m,dni);
    }
    else if(r%4==0 && m==2)
    {
        int dni=29;
        printf("%i miesiac ma %i dni!",m,dni);
    }
    else if(r%4!=0 && m==2)
    {
        int dni=28;
        printf("%i miesiac ma %i dni!",m,dni);
    }
}

int main()
{
    int miesiac,rok;
    printf("Podaj miesiac: ");
    scanf("%i",&miesiac);
    printf("Podaj rok: ");
    scanf("%i",&rok);

    ile_dni(miesiac,rok);

    return 0;
}