#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1,n2,n3,multiplicacao;

    printf("Digite o primeiro numero \n");
    scanf("%f",&n1);
    printf("Digite o segundo numero \n");
    scanf("%f",&n2);
    printf("Digite o terceiro numero \n");
    scanf("%f",&n3);

    multiplicacao=n1*n2*n3;

    printf("Multiplicacao: %.0f \n",multiplicacao);


    return 0;
}
