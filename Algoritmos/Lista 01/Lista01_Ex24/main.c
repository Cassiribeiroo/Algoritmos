#include <stdio.h>
#include <stdlib.h>

int main()
{
    float agua,suco,litros;

    printf("Digite o numero de litros de refresco \n");
    scanf("%f",&litros);

    agua=(litros/10)*8;
    suco=(litros/10)*2;

    printf("\nForam gastos %.2f litros de agua \n",agua);
    printf("\nForam gastos %.2f litros de suco \n",suco);

    return 0;
}
