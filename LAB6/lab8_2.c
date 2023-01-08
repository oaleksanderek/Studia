#include <stdio.h>

int main()
{
    int n;
    printf("Podaj ile liczb: ");
    scanf("%i",&n);
    int num[n];

    printf("\nPodaj %i liczby: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%i",&num[i]);
    } 

    FILE *parzyste,*nieparzyste;

    parzyste = fopen("parzyste.txt","w");
    nieparzyste = fopen("nieparzyste.txt","w");

    for(int j=0;j<n;j++)
    {
        if(num[j]%2==0)
        {
            fprintf(parzyste,"%i\n",num[j]);
        }
        else
        {
            fprintf(nieparzyste,"%i\n",num[j]);
        }
    }

    fclose(parzyste);
    fclose(nieparzyste);
    
    return 0;
}