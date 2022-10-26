#include <stdio.h>
#include <stdlib.h>


void ler_vetor(int veto[], int tam);
void ordena_vetor(int veto[], int tam);
void imprime_vetor(int veto[], int tam);

int main()
{
    int tam;

    printf("Informe o tamanho do vetor \n");
    scanf("%d",&tam);

    int veto[tam];

    ler_vetor(veto, tam);
    ordena_vetor(veto, tam);
    imprime_vetor(veto, tam);

    return 0;
}

void ler_vetor(int veto[], int tam){
    for(int i=0; i<tam; i++){
        printf("Informe o valor da posicao %d \n",i);
        scanf("%d",&veto[i]);
    }
}

void ordena_vetor(int veto[], int tam){
    int i, j, aux;
    for(i=1; i<tam; i++){
        aux = veto[i];

        for(j=i-1; j>=0 && aux<veto[j]; j--){
            veto[j+1] = veto[j];
        }
    veto[j+1] = aux;
    }
}

void imprime_vetor(int veto[], int tam){
    printf("\nVetor ordenado \n");
    for(int i=0; i<tam; i++){
        printf("%d [%d]\n",i ,veto[i]);
    }
}
