#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, idade, soma=0;

    for (i=1; i<=20; i++){
        printf("\n%d - Informe a idade \n",i);
        scanf("%d",&idade);

        if(idade>=18){
            soma=soma+1;
        }
    }

    printf("\nPessoas maiores de 18 anos: %d \n",soma);

    return 0;
}
