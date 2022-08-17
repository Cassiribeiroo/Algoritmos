#include <stdio.h>
#include <stdlib.h>

int main()
{
    float produto,produtodesconto,desconto;

    printf("Digite o valor do produto em reais \n");
    scanf("%f",&produto);

    desconto=produto*0.1;
    produtodesconto=produto-desconto;

    printf("\nvalor do produto com desconto: %.2f reais",produtodesconto);

    return 0;
}
