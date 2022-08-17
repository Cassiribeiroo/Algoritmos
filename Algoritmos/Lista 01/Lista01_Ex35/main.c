#include <stdio.h>
#include <stdlib.h>

int main()
{

    float dmaior,dmenor,area;

    printf("Digite o valor da diagonal maior em centimetros \n");
    scanf("%f",&dmaior);
    printf("Digite o valor da diagonal menor em centimetros\n");
    scanf("%f",&dmenor);

    area=(dmaior*dmenor)/2;

    printf("\nArea do losango: %.2f centimetros quadradros \n",area);

    return 0;
}
