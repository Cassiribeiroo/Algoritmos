#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vr[5],va[10],pontos=0;

    for (int i=0; i<5; i++){
        printf("Informe o numero %d do gabarito da LOTO \n",i+1);
        scanf("%d",&vr[i]);
    }

    for (int j=0; j<10; j++){
        printf("Infome o numero %d do cartao resposta apostado \n",j+1);
        scanf("%d",&va[j]);
    }

    for (int j=0; j<10; j++){
        for (int i=0; i<5; i++){
            if (va[j]==vr[i]){
                pontos++;
            }
        }
    }

    printf("\nNumero de acertos: %d",pontos);

    return 0;
}

