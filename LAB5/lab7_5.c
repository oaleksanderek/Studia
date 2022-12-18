#include <stdio.h>

void sort(int* x,int* y,int* z)
{
    if(*x>*y && *x>*z)
    {
        if(*y>*z)
        {
            printf("%i,%i,%i",*z,*y,*x);
        }
        else
        {
            printf("%i,%i,%i",*y,*z,*x);
        }
       
    }
    if(*y>*x && *y>*z)
    {
        if(*x>*z)
        {
            printf("%i,%i,%i",*z,*x,*y);
        }
        else
        {
            printf("%i,%i,%i",*x,*z,*y);
        }
    }
    if(*z>*x && *z>*y)
    {
        if(*x>*y)
        {
            printf("%i,%i,%i",*y,*x,*z);
        }
        else
        {
            printf("%i,%i,%i",*x,*y,*z);
        }
    }
    
}

int main()
{
    int a=15,b=21,c=3;
    int* wskA=&a;
    int* wskB=&b;
    int* wskC=&c;

    sort(wskA,wskB,wskC);

    return 0;
}