#include <stdio.h>

int wieksza(int d1,int m1,int r1,int d2,int m2,int r2)
{
    if(r1>r2)
    {
        return 2;
    }
    else if(r1<r2)
    {
        return 1;
    }
    else if(r1==r2 && m1>m2)
    {
        return 2;
    }
    else if(r1==r2 && m1<m2)
    {
        return 1;
    }
    else if(r1==r2 && m1==m2 && d1>d2)
    {
        return 2;
    }
    else if(r1==r2 && m1==m2 && d1<d2)
    {
        return 1;
    }
}

int main()
{
    int d1,m1,r1,d2,m2,r2;
    printf("Podaj pierwsza date: ");
    scanf("%i %i %i",&d1,&m1,&r1);
    printf("Podaj druga date: ");
    scanf("%i %i %i",&d2,&m2,&r2);

    if(wieksza(d1,m1,r1,d2,m2,r2)==1)
    {
        printf("Pierwsza data jest wczesniejsza!\n");
    }
    else if(wieksza(d1,m1,r1,d2,m2,r2)==2)
    {
        printf("Druga data jest wczesniejsza!\n");
    }

    return 0;
}