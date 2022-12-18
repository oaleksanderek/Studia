#include <stdio.h>

void zamiana(int *a,int *b)
{
    int *temp;
    temp=a;
    a=b;
    b=temp;
    printf("Zmienne po:%i,%i\n",*a,*b);
}

int main()
{
    int x=2;
    int y=6;
    printf("Zmienne przed:%i,%i\n",x,y);

    zamiana(&x,&y);

    return 0;
}