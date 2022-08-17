#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "Portuguese");

    char resposta;
    int i=0;

    while (i==0){
        printf("Olá tudo bem? (s/n) \n");
        scanf("%s",&resposta);
        fflush(stdin);

        if (resposta == 's'){
            i++;

        }else if(resposta == 'n'){
            printf("Olá tudo bem? (s/n) \n");
            scanf("%s",&resposta);
            fflush(stdin);

        }else{
            printf("\Nao entendi responda novamente \n");
        }
    }

    return 0;
}
