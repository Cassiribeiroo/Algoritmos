#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,a;

    printf("Digite o raio da pizza em centimetros \n");
    scanf("%f",&r);

    a=r*3.14;

    printf("\nArea da pizza: %.2f cm \n",a);

    return 0;
}
