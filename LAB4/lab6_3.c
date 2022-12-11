#include <stdio.h>

int l_calk(int n){
   if(n==1)
   {
       return printf("1");
   }
   else if(n>1)
   {
      printf("%i ",n);
      return l_calk(n-1);
   }
}

int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%i",&n);
    
    printf("Liczby calkowite z przedzialu od 1 do %i to: ",n);
    l_calk(n);

    return 0;
}
