#include <stdio.h>
#include <stdlib.h>

int main()
{
    float frangos,valor;

    printf("Digite o numero de frangos existentes na granja \n");
    scanf("%f",&frangos);

    valor=frangos*7;

    printf("Gasto final: %.2f reais \n",valor);

    return 0;
}
