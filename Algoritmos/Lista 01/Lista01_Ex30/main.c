#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,vendas,comissao,salariofinal;

    printf("Digite o valor do salario em reais \n");
    scanf("%f",&salario);
    printf("Digite o valor em reais das vendas realizadas \n");
    scanf("%f",&vendas);

    comissao=0.04*vendas;
    salariofinal=salario+comissao;

    printf("\nValor da comissao: %.2f reais \n",comissao);
    printf("\nValor do salario final: %.2f reais \n",salariofinal);

    return 0;
}
