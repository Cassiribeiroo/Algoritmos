#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,soma=0;
    for(int i=0; i<20; i++){

        printf("Informe o numero %d: \n",i+1);
        scanf("%d",&numero);

        if (numero>8){
            soma++;
        }
    }

    printf("\nTotal de numeros maiores que 8: %d",soma);

    return 0;
}
