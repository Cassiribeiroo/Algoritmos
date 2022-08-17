#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[100];
    int i=0;

    printf("Digite o nome \n");
    fgets(nome,100,stdin);

    for (i=0; i<10; i++){
        printf("\n%s",nome);
    }

    return 0;
}
