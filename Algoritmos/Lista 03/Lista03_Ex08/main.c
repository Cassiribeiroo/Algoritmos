#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade_menor=500,idade;
    char nome[50],nome_menor[50];

    for (int i=1; i<11; i++){

        printf("\nInforme o nome %d \n",i);
        scanf("%s",nome);
        printf("Informe a idade \n");
        scanf("%d",&idade);

        if(idade<idade_menor){
            idade_menor=idade;
            strcpy(nome_menor, nome);
        }
    }

    printf("\n%s, com %d anos eh a pessoa mais nova \n",nome_menor,idade_menor);

    return 0;
}
