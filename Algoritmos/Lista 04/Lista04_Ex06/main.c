#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10],menor=1000,n=0,maior=-1,m=0;

    for (int i=0; i<10; i++){
        printf("Informe a idade %d \n",i+1);
        scanf("%d",&vet[i]);

        if (vet[i]<menor){
            menor=vet[i];
            n=i;
        }else if(vet[i]>maior){
            maior=vet[i];
            m=i;
        }
    }

    printf("\nMaior idade: %d, posicao do vetor: %d \n",maior,m);
    printf("\nMenor idade: %d, posicao do vetor: %d \n",menor,n);

    return 0;
}
