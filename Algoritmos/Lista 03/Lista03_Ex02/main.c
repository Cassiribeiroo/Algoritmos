#include <stdio.h>
#include <stdlib.h>

int main()
{
    int comeco,fim,soma=0;

    printf("Informe o numero que começa o intervalo para realizar a soma \n");
    scanf("%d",&comeco);
    printf("Informe o numero que termina o intervalo para realizar a soma \n");
    scanf("%d",&fim);


    for (int i=0; i<fim; i++){
        soma=soma+(comeco+i);
    }
    if(comeco==0){
        soma=soma+fim;
    }
    printf("A soma eh %d",soma);

    return 0;
}


