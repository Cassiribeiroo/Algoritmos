#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor,ano;

    printf("Informe o ano do carro \n");
    scanf("%f",&ano);
    printf("Informe o valor do carro em reais \n");
    scanf("%f",&valor);

    if (ano<1990){
        printf("\nValor a ser pago pela transferencia: %.2f reais \n",valor*0.01);
    }else{
        printf("nValor a ser pago pela transferencia: %.2f reais \n",valor*0.015);
    }

    return 0;
}
