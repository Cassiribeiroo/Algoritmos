#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float horas;

    printf("Selecione o nivel do professor \n");
    printf("\n1 - Professor nivel 1 \n");
    printf("2 - Professor nivel 2 \n");
    printf("3 - Professor nivel 3 \n");
    scanf("%d",&n);

    switch (n){

    case 1:
    printf("\nInforme o numero de horas aula por semana \n");
    scanf("%f",&horas);
    printf("\nSalario: %.2f reais \n",(12*horas*4.5));
    break;

    case 2:
    printf("\nInforme o numero de horas aula por semana \n");
    scanf("%f",&horas);
    printf("\nSalario: %.2f reais \n",(17*horas*4.5));
    break;

    case 3:
    printf("\nInforme o numero de horas aula por semana \n");
    scanf("%f",&horas);
    printf("\nSalario: %.2f reais \n",(25*horas*4.5));
    break;
    }

    return 0;
}
