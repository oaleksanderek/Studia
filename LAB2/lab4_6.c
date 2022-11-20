#include <stdio.h>

int main()
{
    int tab[2][2]={{1,0},{0,1}};

    printf("|--|\n");

    for(int i=0;i<2;i++)
    {
        // printf("|%i %i|\n",tab[i][nr],tab[i][nr++]);

        if(tab[i][0]==1 && tab[i][1]==0)
        {
            printf("|x-|\n");
        }
        else if(tab[i][0]==0 && tab[i][1]==1)
        {
            printf("|-x|\n");
        }
        else
        {
            printf("Blad");
        }
    }
    printf("|--|\n");

    return 0;
}