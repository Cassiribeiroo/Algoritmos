#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,animais,gato=0,cachorro=0;
    char resposta;

    printf("\nInforme o numero total de animais \n");
    scanf("%d",&animais);
    fflush(stdin);

    while (i<animais){

        printf("\nInforme se %d eh gato(g) ou cachorro(c) \n",i+1);
        scanf("%c",&resposta);
        fflush(stdin);

        if (resposta == 'g'){
            gato++;
            i++;
        }else if (resposta == 'c'){
            cachorro++;
            i++;
        }else{
            printf("\nResposta invalida \n");
        }
    }

    printf("\n numero total de gatos: %d \n",gato);
    printf("\n numero total de cachorros: %d \n",cachorro);
    return 0;
}
