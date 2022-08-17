#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,soma=0;
    for(int i=0; i<20; i++){

        printf("Informe o numero %d: \n",i+1);
        scanf("%d",&numero);

        if (numero>=0 && numero <= 100){
            soma++;
        }
    }

    printf("\nTotal de numeros que estao entre 0 e 100: %d",soma);

    return 0;
}

