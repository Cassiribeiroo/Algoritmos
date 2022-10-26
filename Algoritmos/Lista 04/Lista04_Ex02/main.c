#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[20],par=0,maior50=0,menor7=0;

    for (int i=0; i<20; i++){
        printf("Informe o valor da posicao %d do vetor \n",i+1);
        scanf("%d",&vet[i]);

        if(vet[i]%2==0){
            par++;
        }else if(vet[i]>50){
            maior50++;
        }else if(vet[i]<7){
            menor7++;
        }
    }

    printf("\nTotal de numeros pares no vetor: %d \n",par);
    printf("Total de numeros impares no vetor: %d \n",20-par);
    printf("Total de numeros maiores que 50 no vetor: %d \n",maior50);
    printf("Total de numeros menores que 7 no vetor: %d \n",menor7);

    return 0;
}
