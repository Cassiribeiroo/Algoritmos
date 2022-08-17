#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nprodutos;
    float valorp,valort=0;

    printf ("Informe o numero de produtos consumidos \n");
    scanf("%d",&nprodutos);

    for (int i=0; i<nprodutos; i++){
        printf("\nInforme o valor do produto %d em reais \n ",i+1);
        scanf("%f",&valorp);
        valort=valorp+valort;
    }

    printf("\nValor final: %.2f reais \n",valort);

    return 0;
}
