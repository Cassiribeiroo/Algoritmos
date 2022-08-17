#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero,nv=0;

    for (int i=0; numero>=0; i++){
        printf("Informe o numero %d \n",i+1);
        scanf("%d",&numero);

        if (numero>=0){
            nv=numero+nv;
        }
    }

    printf("\nSoma total dos numeros positivos: %d \n",nv);

    return 0;
}
