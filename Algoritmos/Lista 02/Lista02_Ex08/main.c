#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto;
    int n;

    printf("Digite o valor do produto \n");
    scanf("%f",&produto);

    printf("\nOpcao 1 - A vista em dinheiro ou cheque \n");
    printf("Opcao 2 - A vista no cartao de credito \n");
    printf("Opcao 3 - Em duas vezes, preco normal de etiqueta sem juros \n");
    printf("Opcao 4 - Em duas vezes, preco normal de etiqueta mais juros de 10 por cento \n");
    scanf("%d",&n);

    switch (n){

    case 1:
    printf("\nPagamento a vista em dinheiro ou cheque %.2f reais \n",(produto-(produto*0.1)));
    break;
    case 2:
    printf("\nPagamento a vista no cartao de credito %.2f reais \n",(produto-(produto*0.15)));
    break;
    case 3:
    printf("\nPagamento em duas vezes sem juros %.2f reais, duas parcelas de %.2f reais \n",produto,(produto/2));
    break;
    case 4:
    printf("\nPagamento em duas vezes com juros de 10 porcento %.2f reais, duas parcelas de %.2f reais \n",(produto+(produto*0.1)),((produto+(produto*0.1))/2));
    break;

    }

    return 0;
}
