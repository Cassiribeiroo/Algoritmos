#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total,m3,m5,m8,m11,m13,c3t=0,c5t=0,c8t=0,c11t=0,c13t=0;
    int casas,c3,c5,c8,c11,c13;
    printf("Informe o numero de casas participantes da pesquisa \n");
    scanf("%d",&casas);

    for (int i=0; i<casas; i++){

        printf("CASA NUMERO %d",i+1);
        printf("\nInforme o numero de pessoas que assistem ao canal 3 \n");
        scanf("%d",&c3);
        printf("Informe o numero de pessoas que assistem ao canal 5 \n");
        scanf("%d",&c5);
        printf("Informe o numero de pessoas que assistem ao canal 8 \n");
        scanf("%d",&c8);
        printf("Informe o numero de pessoas que assistem ao canal 11 \n");
        scanf("%d",&c11);
        printf("Informe o numero de pessoas que assistem ao canal 13 \n");
        scanf("%d",&c13);

        c3t=c3+c3t;
        c5t=c5+c5t;
        c8t=c8+c8t;
        c11t=c11+c11t;
        c13t=c13+c13t;

        total=c3t+c5t+c8t+c11t+c13t;

        m3=(c3t*100)/total;
        m5=(c5t*100)/total;
        m8=(c8t*100)/total;
        m11=(c11t*100)/total;
        m13=(c13t*100)/total;

    }


    printf("\nMedia de pessoas que assistem ao canal 3: %.2f % \n",m3);
    printf("Media de pessoas que assistem ao canal 5: %.2f % \n",m5);
    printf("Media de pessoas que assistem ao canal 8: %.2f % \n",m8);
    printf("Media de pessoas que assistem ao canal 11: %.2f % \n",m11);
    printf("Media de pessoas que assistem ao canal 13: %.2f % \n",m13);

    return 0;
}
