#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hora,horaextra,salario,salarioliquido;

    printf("Digite o numero de horas normais trabalhadas \n");
    scanf("%f",&hora);
    printf("Digite o numero de horas extra trabalhadas \n");
    scanf("%f",&horaextra);

    salario=(hora*10)+(horaextra*15);
    salarioliquido=salario-(salario*0.1);

    printf("Salario: %.2f reais \n",salario);
    printf("Salario liquido: %.2f reais \n",salarioliquido);

    return 0;
}
