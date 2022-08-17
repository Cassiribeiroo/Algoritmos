#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome [1000];
    int n,i=0;

    printf("Informe seu nome \n");
    fgets(nome,100,stdin);
    printf("\nInforme o numero de vezes que deseja imprimir o nome\n");
    scanf("%d",&n);

    for (i=0; i<n; i++){
        printf("\n%s",nome);
    }

    return 0;
}
