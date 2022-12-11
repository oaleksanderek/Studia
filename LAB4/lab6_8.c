#include <stdio.h>
#include <string.h>

int jestPalindromem(char tab[100],int i,int j)
{
    if(j==i)
    {
        return 1;
    }
    else if(tab[i]==tab[j])
    {
        return jestPalindromem(tab,++i,--j);
    }
    else
    {
        return 0;
    }
}

int main()
{
    char slowo[100];
    printf("Podaj slowo: ");
    scanf("%s",slowo);
    
    int check;
    check=jestPalindromem(slowo,0,strlen(slowo)-1);
    
    if(check==1)
    {
        printf("Slowo \"%s\" jest palindromem!",slowo);
    }
    else
    {
        printf("Slowo \"%s\" nie jest palindromem!",slowo);
    }
    
    return 0;
}
