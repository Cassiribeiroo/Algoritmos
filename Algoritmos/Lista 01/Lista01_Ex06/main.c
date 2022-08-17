#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, valor;

    printf("Informe o valor da refeicao em quilos \n");
    scanf("%f",&peso);

    valor=peso*12;

    printf("\nValor da refeicao: %.2f reais \n",valor);

    return 0;
}
