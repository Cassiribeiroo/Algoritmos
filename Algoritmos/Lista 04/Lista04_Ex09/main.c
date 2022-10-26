#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d[10],soma=0,in=0;

    for (int i=0; i<10; i++){
        printf("Informe o numero da posicao %d do vetor D \n",i);
        scanf("%d",&d[i]);
        if (d[i]>0){
            soma++;
        }
    }

    int vet[soma];

    for (int i=0; i<10; i++){
        if (d[i]>0){
            vet[in]=d[i];
            in++;
        }
    }

    for (int i=0; i<soma; i++){
        printf("Posicao %d: [%d] \n",i,vet[i]);
    }

    return 0;
}
