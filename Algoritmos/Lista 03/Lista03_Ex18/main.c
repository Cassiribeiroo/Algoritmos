#include <stdio.h>
#include <stdlib.h>

int main()
{
    int alunos;
    float nota1,nota2,notaf;

    printf("Informe a quantidade de alunos da turma \n");
    scanf("%d",&alunos);

    for (int i=0; i<alunos; i++){
        printf("\nInforme a nota 1 do aluno %d \n",i+1);
        scanf("%f",&nota1);
        printf("Informe a nota 2 do aluno %d \n",i+1);
        scanf("%f",&nota2);

        notaf=(nota1+nota2)/2;

        if (notaf>=6){
            printf("\nAluno %d aprovado \n",i+1);

        }else{
            printf("\nAluno %d reprovado \n",i+1);
        }
    }

    return 0;
}
