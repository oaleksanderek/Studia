#include <stdio.h>

int euklides(int a,int b){
   
   if(a%b==0)
   {
       return b;
   }
   else
   {
       return euklides(b,a%b);
   }
   
}

int main()
{
    int a,b;
    printf("Podaj liczbe a: ");
    scanf("%i",&a);
    printf("Podaj liczbe b: ");
    scanf("%i",&b);
    
    printf("NWD to: %i",euklides(a,b));

    return 0;
}
