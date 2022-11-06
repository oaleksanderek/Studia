#include <stdio.h>

int main()
{
    int liczba;

    printf("Dla 0 radianow wybierz 1\n");
    printf("Dla 1/6 Pi rad wybierz 2\n");
    printf("Dla 1/4 Pi rad wybierz 3\n");
    printf("Dla 1/3 Pi rad wybierz 4\n");
    printf("Dla 1/2 Pi rad wybierz 5\n");

    printf("Podaj liczbe: ");
    scanf("%i", &liczba);

    int rad1,rad2,rad3,rad4,rad5;

    rad1=0;
    rad2=30;
    rad3=45;
    rad4=60;
    rad5=90;

    if(liczba==1)
    {
        printf("0 radianow ma %i stopni!",rad1);
    }
    else if(liczba==2)
    {
        printf("1/6 Pi radianow ma %i stopni!",rad2);
    }
    else if(liczba==3)
    {
        printf("1/4 Pi radianow ma %i stopni!",rad3);
    }
    else if(liczba==4)
    {
        printf("1/3 Pi radianow ma %i stopni!",rad4);
    }
    else if(liczba==5)
    {
        printf("1/2 Pi radianow ma %i stopni!",rad5);
    }
    else
    {
        printf("Bledna opcja!");
    }

    return 0;
}
