#include <stdio.h>
#include <stdlib.h>

int main()
{


    float litros,lata,garrafap,garrafag;

    printf("Digite o numero de latas de 350 ml vendidas \n");
    scanf("%f",&lata);
    printf("digite o numero de garrafas de 600 ml vendidas \n");
    scanf("%f",&garrafap);
    printf("Digite o numero de garrafas de 2l vendidas \n");
    scanf("%f",&garrafag);

    litros=(lata*0.35)+(garrafap*0.6)+(garrafag*2);

    printf("\nTotal de litros vendidos %.1f \n",litros);





    return 0;
}
