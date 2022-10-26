#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10],soma=0,igual=0,n=0,somamedia=0;
    float media = 0;

    for (int i=0; i<10; i++){
        printf("Informe o valor da posicao %d \n",i+1);
        scanf("%d",&vet[i]);

        if(vet[i]<15){
            soma=soma+vet[i];

        }else if(vet[i]==15){
            igual++;

        }else if(vet[i]>15){
            somamedia=somamedia+vet[i];
            n++;
        }
    }

    if (n > 0) {
        media= (somamedia)/n;
    }

    printf("\nSoma de elementos menores que 15 do vetor: %d \n",soma);
    printf("Quantidade de elementos iguais a 15 armazenados no vetor: %d \n",igual);
    printf("Media dos elementos maiores que 15 do vetor: %.2f \n",media);

    return 0;
}
