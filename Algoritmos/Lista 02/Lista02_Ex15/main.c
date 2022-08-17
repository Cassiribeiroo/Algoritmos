#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    int codigo;

    printf("Informe o salario do funcionario em reais \n");
    scanf("%f",&salario);
    printf("\nCargo do funcionario: \n");
    printf("101 - Gerente \n");
    printf("102 - Engenheiro \n");
    printf("103 - Tecnico \n");
    printf("104 - Outro \n");
    printf("\nInforme o codigo referente ao cargo do funcionario \n");
    scanf("%d",&codigo);

    switch (codigo){
    case 101:
        printf("\nSalario: %.2f reais \n",salario);
        printf("\nAumento de 10 porcento: %.2f reais \n",salario*0.1);
        printf("\nNovo salario: %.2f reais \n",(salario*0.1)+salario);
        break;
    case 102:
        printf("\nSalario: %.2f reais \n",salario);
        printf("\nAumento de 20 porcento: %.2f reais \n",salario*0.2);
        printf("\nNovo salario: %.2f reais \n",(salario*0.2)+salario);
        break;
    case 103:
        printf("\nSalario: %.2f reais \n",salario);
        printf("\nAumento de 30 porcento: %.2f reais \n",salario*0.3);
        printf("\nNovo salario: %.2f reais \n",(salario*0.3)+salario);
        break;
    case 104:
        printf("\nSalario: %.2f reais \n",salario);
        printf("\nAumento de 40 porcento: %.2f reais \n",salario*0.4);
        printf("\nNovo salario: %.2f reais \n",(salario*0.4)+salario);
        break;
    default:
        printf("\n Codigo nao cadastrado \n");

    }

    return 0;
}
