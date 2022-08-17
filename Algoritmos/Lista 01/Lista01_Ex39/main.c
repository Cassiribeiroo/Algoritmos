#include <stdio.h>
#include <stdlib.h>

int main()
{

   float salario,conta1,conta2,resto;

    printf("Digite o valor do salario em reais \n");
    scanf("%f",&salario);
    printf("\nDigite o valor da conta 1 em reais \n");
    scanf("%f",&conta1);
    printf("\nDigite o valor da conta 2 em reais \n");
    scanf("%f",&conta2);

    resto=salario-((conta1*0.02)+(conta2*0.02))-(conta1)-(conta2);

    printf("\n \nRestara %.2f reais \n",resto);

    return 0;
}
