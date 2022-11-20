#include <stdio.h>

int main()
{
    int tab[]={1,2,3,4,5};
    int i=1;

    for(i;i<=5;i++)
    {
        tab[i]=i*i;
        printf("%i\n",tab[i]);
    }

    return 0;
}