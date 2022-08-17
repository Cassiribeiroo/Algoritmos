#include <stdio.h>
#include <stdlib.h>

int main()
{
    int id;
    float n1,n2,n3,media;

    printf("Informe o numero de identificacao do aluno \n");
    scanf("%d",&id);

    printf("\nInforme a primeira nota \n");
    scanf("%f",&n1);
    printf("\nInforme a segunda nota \n");
    scanf("%f",&n2);
    printf("\nInforme a terceira nota \n");
    scanf("%f",&n3);

    media=(n1+n2+n3)/3;

    if (media>=7){
        printf("\nAluno %d aprovado, media: %.2f \n",id,media);
    }else{
        printf("\nAluno %d reprovado, media: %.2f \n",id,media);
    }

    return 0;
}
