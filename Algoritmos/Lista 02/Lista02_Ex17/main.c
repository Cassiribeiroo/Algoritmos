#include <stdio.h>
#include <stdlib.h>

int main()
{
    int item;
    float valor,quantidade;

    printf("MENU \n");
    printf(" \n1 - Cachorro quente [11,00 reais] \n");
    printf("2 - Bauru [8,50 reais] \n");
    printf("3 - Misto quente [8,00 reais] \n");
    printf("4 - Hamburguer [9,00 reais] \n");
    printf("5 - Cheeseburguer [10,00 reais \n");
    printf("6 - Refrigerante [4,50 reais \n");
    printf("\n Digite o codigo do item desejado \n");
    scanf("%d",&item);
    printf("\n Digite a quantidade de itens desejada \n");
    scanf("%f",&quantidade);

    switch (item){
        case 1:
        printf("\n Valor final: %.2f reais \n",(11*quantidade));
        break;
        case 2:
        printf("\n Valor final: %.2f reais \n",(8.5*quantidade));
        break;
        case 3:
        printf("\n Valor final: %.2f reais \n",(8*quantidade));
        break;
        case 4:
        printf("\n Valor final: %.2f reais \n",(9*quantidade));
        break;
        case 5:
        printf("\n Valor final: %.2f reais \n",(10*quantidade));
        break;
        case 6:
        printf("\n Valor final: %.2f reais \n",(4.5*quantidade));
        break;
        default:
        printf("Codigo nao cadastrado \n");
    }

    return 0;
}
