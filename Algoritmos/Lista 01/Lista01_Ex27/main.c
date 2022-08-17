#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,div;

    printf("Digite o primeiro numero \n");
    scanf("%f",&n1);
    printf("Digite o segundo numero diferente de zero \n");
    scanf("%f",&n2);

    div=n1/n2;

    printf("\nValor da divisao: %.2f",div);


    return 0;
}
