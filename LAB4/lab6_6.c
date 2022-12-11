#include <stdio.h>

int to_binary(int n){
   if(n>0)
   {
       to_binary(n/2);
       printf("%i",n%2);
   }
}

int main()
{
    int n;
    printf("Podaj liczbe(system dziesietny) n: ");
    scanf("%i",&n);
    
    printf("Liczba w systemie binarnym: ");
    to_binary(n);

    return 0;
}
