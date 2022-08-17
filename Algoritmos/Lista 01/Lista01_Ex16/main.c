#include <stdio.h>
#include <stdlib.h>

int main()
{
    float queijo,presunto,hamburguer,sanduiche,total;

    printf("Digite o numero de sanduiches a fazer \n");
    scanf("%f",&sanduiche);

    queijo=sanduiche*0.1;
    presunto=sanduiche*0.05;
    hamburguer=sanduiche*0.1;

    printf("%.3f quilos de queijo necessarios para compra \n",queijo);
    printf("%.3f quilos de presunto necessarios para compra \n",presunto);
    printf("%.3f quilos de carne necessarios para compra \n",hamburguer);

    return 0;
}
