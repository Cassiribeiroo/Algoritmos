#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anonascimento,anoatual,idade;

    printf("Digite o ano de seu nascimento \n");
    scanf("%d",&anonascimento);
    printf("Digite o ano atual \n");
    scanf("%d",&anoatual);

    idade=anoatual-anonascimento;

    printf("\nIdade em anos: %d\n",idade);
    printf("Idade em meses: %d\n",idade*12);
    printf("Idade em dias: %d\n",(idade*365));
    printf("Idadde em semanas: %d\n",(idade*52));

    return 0;
}
