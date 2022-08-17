#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    char nome[50];

    printf("Digite o seu nome \n");
    scanf("%s",nome);
    printf("\nDigite sua idade \n");
    scanf("%d",&idade);
    printf("\n%s voce ja viveu %d dias \n",nome,idade*365);


    return 0;
}
