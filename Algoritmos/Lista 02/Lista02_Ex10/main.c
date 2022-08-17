#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;

    printf("Informe o primeiro numero \n");
    scanf("%d",&n1);
    printf("Informe o segundo numero \n");
    scanf("%d",&n2);


    if (n1>n2){
        printf("\nPrimeiro numero eh maior que o segundo, diferenca: %d \n",(n1-n2));
    }else if (n2>n1){
        printf("\nSegundo numero eh maior que o primeiro, diferenca: %d \n",(n2-n1));
    }else{
        printf("\nO primeiro numero e o segundo numero sao iguais \n");

    }

    return 0;
}

