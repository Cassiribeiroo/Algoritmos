#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distancia, total=0;

    while (total<4000){
        printf("Informe a distancia percorrida em km desde a ultima parada \n");
        scanf("%f",&distancia);
        total=total+distancia;
        printf("\nAte aqui voce percorreu %.0f km. \n",total);
    }
    if (total==4000){
        printf("\nVoce chegou ao km 4000! \n");
    }else if (total>4000){
        printf("\nVoce passou do km 4000! \n");
    }
    return 0;
}
