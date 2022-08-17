#include <stdio.h>
#include <stdlib.h>

int main()
{
    float conta,felipe;
    int carlos,andre;

    printf("Digite o valor total da conta \n");
    scanf("%f",&conta);

    andre=conta/3;
    carlos=conta/3;
    felipe=conta-(carlos+andre);

    printf("\nConta total de: %.2f reais \n",conta);
    printf("Valor a pagar Felipe: %.2f reais \n",felipe);
    printf("Valor a pagar Carlos: %d reais \n",carlos);
    printf("Valor a pagar Andre: %d reais \n",andre);

    return 0;
}
