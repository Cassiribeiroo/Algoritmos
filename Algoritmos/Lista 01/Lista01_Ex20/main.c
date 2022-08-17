#include <stdio.h>
#include <stdlib.h>

int main()
{
    float blusa,novelo;

    printf("Digite o numero de blusas confeccionadas \n");
    scanf("%f",&blusa);
    printf("Digite o numero de novelos gastos \n");
    scanf("%f",&novelo);

    printf("Numero de novelos necessarios por blusa: %.2f \n",novelo/blusa);

    return 0;
}
