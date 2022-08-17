#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gasolina,valor,litros;

    printf("\Informe o valor que gostaria de colocar de gasolina em reais \n");
    scanf("%f",&gasolina);
    printf("\nInforme o valor do litro da gasolina \n");
    scanf("%f",&valor);

    litros=gasolina/valor;

    printf("\nVoce colocou %.2f litros de gasolina \n",litros);


    return 0;
}
