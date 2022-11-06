#include <stdio.h>

int main()
{
    int dzien;
    int miesiac;
    int rok;

    printf("Podaj dzien: ");
    scanf("%i", &dzien);

    printf("Podaj miesiac: ");
    scanf("%i", &miesiac);

    printf("Podaj rok: ");
    scanf("%i", &rok);

    int przystepny = rok%4;


    if(dzien>0 && dzien<=31 && miesiac==1 && miesiac==3 && miesiac==5 && miesiac==7 && miesiac==8 && miesiac==10 && miesiac==12 && rok>0)
    {
       printf("Liczby tworza poprawna date!"); 
    }
    else if(dzien>0 && dzien<=30 && miesiac==4 && miesiac==6 && miesiac==9 && miesiac==11 && rok>0)
    {
        printf("Liczby tworza poprawna date!");
    }
    else if(dzien>0 && dzien<=28 && miesiac==2 && przystepny!=0)
    {
        printf("Liczby tworza poprawna date!");
    }
    else if(dzien>0 && dzien<=29 && miesiac==2 && przystepny==0)
    {
        printf("Liczby tworza poprawna date!");
    }
    else
    {
        printf("Liczby tworza niepoprawna date!");
    }

    return 0;
}