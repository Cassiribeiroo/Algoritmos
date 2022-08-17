#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, n,soma;

    soma=0;
    for (i=0; i<10; i++){
        printf("Informe o numero %d \n",i+1);
        scanf("%d",&n);
        soma=soma+n;
    }
    printf("\nSoma: %d \n",soma);

    return 0;
}

