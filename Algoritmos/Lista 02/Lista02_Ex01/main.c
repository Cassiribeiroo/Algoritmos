#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Digite o valor de A \n");
    scanf("%d",&a);
    printf("Digite o valor de B \n");
    scanf("%d",&b);

    if (a>b){
        printf("\nA maior que B, valor de A: %d\n",a);
    } else if (a<b){
        printf("\nA menor que B, valor de B: %d\n",b);
    } else {
        printf("\nValores de A e B sao iguais, valor de A e B: %d\n",a);
    }


    return 0;
}
