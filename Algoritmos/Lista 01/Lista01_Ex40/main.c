#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ca,co,hip;

    printf("Digite o valor do cateto oposto em centimetros\n");
    scanf("%f",&co);
    printf("Digite o valor do cateto adjacente em centimetros\n");
    scanf("%f",&ca);

    hip=co/ca;

    printf("Valor da hipotenusa: %.2f centimetros \n",hip);

    return 0;
}
