#include <stdio.h>
#include <stdlib.h>

int main()
{
   float sminimo,salario,ns;

    printf("Digite o valor do salario do funcionario em reais \n");
    scanf("%f",&salario);
    printf("Digite o valor do salario minimo em reais \n");
    scanf("%f",&sminimo);

    ns=salario/sminimo;

    printf("\nNumero de salarios minimos que o funcionario ganha: %.2f salario[s] \n",ns);

    return 0;
}
