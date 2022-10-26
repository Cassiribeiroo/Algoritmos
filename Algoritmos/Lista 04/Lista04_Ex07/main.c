#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet1[10],vet2[5],vet3[5],indice=0;

    for (int i=0; i<10; i++){
        printf("Informe o numero %d do vetor A \n",i+1);
        scanf("%d",&vet1[i]);
    }

    printf("\n");

    for (int j=0; j<5; j++){
        printf("Informe o numero %d do vetor B \n",j+1);
        scanf("%d",&vet2[j]);
    }

    for (int k=0; k<5; k++){
        vet3[k]=0;
    }

    for (int i=0; i<10; i++){
        for (int j=0; j<5; j++){
            if (vet1[i]==vet2[j]){
                vet3[indice]=vet1[i];
                indice++;
            }
        }
    }

    printf("\n");
    for (int k=0; k<5; k++){
        printf("Vetor 3 posicao %d [%d] \n",k,vet3[k]);
    }

    return 0;
}
