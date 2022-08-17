#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lado1, lado2;

    printf("Digite o lado 1 do terreno \n");
    scanf("%f",&lado1);
    printf("Digite o lado 2 do terreno \n");
    scanf("%f",&lado2);
    printf("A area do terreno tem o valor de %.2f m",lado1*lado2);

    return 0;
}
