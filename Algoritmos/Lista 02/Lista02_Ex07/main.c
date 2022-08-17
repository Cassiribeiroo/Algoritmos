#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float altura;

    printf("Informe o sexo escolhido \n M para mulher \n H para homem \n");
    scanf("%c",&sexo);

    if ((sexo == 'm') || (sexo == 'M')){
        printf("Informe a altura em metros \n");
        scanf("%f",&altura);
        printf("\nPeso: %.2f kg \n",((62.1*altura)-44.7));
    }else if ((sexo == 'h') || (sexo == 'H')){
        printf("Informe a altura em metros \n");
        scanf("%f",&altura);
        printf("\nPeso : %.2f kg\n",((72.7*altura)-58));
    }else {
        printf("Variavel desconhecida \n");
    }

    return 0;
}
