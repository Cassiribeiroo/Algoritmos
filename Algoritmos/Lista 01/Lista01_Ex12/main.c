#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,aumento,imposto;

    printf("Digite o valor do salario em reais \n");
    scanf("%f",&salario);

    aumento=salario+(salario*0.15);
    imposto=(aumento-(aumento*0.08));

    printf("\nSalario inicial: %.2f reais \n",salario);
    printf("Salario com aumento: %.2f reais \n",aumento);
    printf("Salario com imposto: %.2f reais \n",imposto);

    return 0;
}
