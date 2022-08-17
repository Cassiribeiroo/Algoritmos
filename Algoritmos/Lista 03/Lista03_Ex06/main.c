#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, i=0, media=0, soma=0;

    for (i=1; i<=20; i++){
        printf("\n%d - Informe a idade \n",i);
        scanf("%d",&idade);
        soma=idade+soma;
    }
    media=soma/20;
    printf("\n\nA media de idades eh: %d anos \n",media);

    return 0;
}
