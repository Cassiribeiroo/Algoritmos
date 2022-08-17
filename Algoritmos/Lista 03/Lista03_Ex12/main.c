#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,soma1=0,soma2=0,soma3=0;
    for(int i=0; i<20; i++){

        printf("Informe o numero %d: \n",i+1);
        scanf("%d",&numero);

        if (numero>=0 && numero<=100){
            soma1++;

        }else if(numero>=101 && numero<=200){
            soma2++;

        }else if (numero>200){
            soma3++;
        }
    }

    printf("\nTotal de numeros entre 0 e 100: %d",soma1);
    printf("\nTotal de numeros entre 101 e 200: %d",soma2);
    printf("\nTotal de numeros maiores que 200: %d \n",soma3);

    return 0;
}
