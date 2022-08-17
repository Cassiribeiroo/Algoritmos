#include <stdio.h>
#include <stdlib.h>

int main()
{
    int centena,dezena,unidade,numero;

    printf("Digite um numero de ate tres digitos \n");
    scanf("%d",&numero);

    centena=numero/100;
    dezena=(numero-(centena*100))/10;
    unidade=(numero-((centena*100)+(dezena*10)));

    printf("\nCentenas: %d \n",centena);
    printf("Dezenas: %d \n",dezena);
    printf("Unidades: %d \n",unidade);

    return 0;
}
