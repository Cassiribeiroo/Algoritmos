#include <stdio.h>
#include <stdlib.h>

int main()
{

    float kg,g;

    printf("Digite o peso em kg \n");
    scanf("%f",&kg);

    g=kg*1000;

    printf("\nPeso em gramas %.3f \n",g);

    return 0;
}
