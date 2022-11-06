#include <stdio.h>

int main()
{
    char znak;
    printf("Podaj znak ASCII: ");
    scanf("%c", &znak);

    printf("ASCII: %d\n", znak);

    if(znak>65 && znak<90)
    {
        printf("Ten znak jest litera alfabetu!");
    }
    else if(znak>97 && znak<122)
    {
        printf("Ten znak jest litera alfabetu!"); 
    }  
    else
    {
        printf("Ten znak NIE jest litera alfabetu!");
    }
    
    return 0;
}