#include <stdio.h>
#include <stdlib.h>

int main()
{

    float sombrapredio,sombrapessoa,hpredio,hpessoa;

    printf("Digite o tamanho da sombra do predio em metros \n");
    scanf("%f",&sombrapredio);
    printf("Digite a sua altura \n");
    scanf("%f",&hpessoa);
    printf("Digite o tamanho da sua sombra em metros \n");
    scanf("%f",&sombrapessoa);

    hpredio=(hpessoa*sombrapredio)/sombrapessoa;

    printf("\n Altura do predio: %.2f metros \n",hpredio);

    return 0;
}
