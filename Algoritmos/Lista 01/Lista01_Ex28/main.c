#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1,nota2,media;

    printf("Digite o valor da primeira nota \n");
    scanf("%f",&nota1);
    printf("Digite o valor da segunda nota \n");
    scanf("%f",&nota2);

    media=((nota1*2)+(nota2*3))/5;

    printf("\nMedia ponderada das notas: %.2f \n",media);

    return 0;
}
