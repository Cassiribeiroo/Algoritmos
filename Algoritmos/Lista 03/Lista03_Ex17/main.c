#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso,bebida,total;
    int i=0;

    while(i==0){

        printf("\nInforme o peso do prato, caso nao tenha comido nada digite 0 \n");
        scanf("%f",&peso);
        printf("Informe o valor da bebida, caso nao tenha bebido nada digite 0 \n");
        scanf("%f",&bebida);

        total = (peso*15)+bebida;

        printf("\nValor total: %.2f \n",total);

        if (peso==0 && bebida==0){
            i++;
        }
    }

    return 0;
}
