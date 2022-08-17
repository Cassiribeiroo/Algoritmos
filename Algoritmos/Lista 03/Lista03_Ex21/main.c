#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mesas=50,fumantes=25,nao=25;
    char resposta;


    for (int i=0; i<=mesas; i++){

        if (fumantes>0 && nao>0){
            printf("\nBem-vindo a area de reservas! \n");
            printf("Mesas disponiveis na area de fumantes: %d \n",fumantes);
            printf("Mesas disponiveis na area de nao fumantes: %d \n",nao);
            printf("\nQual lugar deseja realizar sua reserva? area de fumantes(f) area de nao fumantes(n)? \n");
            scanf("%c",&resposta);
            fflush(stdin);
                if (resposta == 'f'){
                    fumantes=fumantes-1;
                }else if (resposta == 'n'){
                    nao=nao-1;
                }else{
                    printf("\n Nao entendi sua resposta \n");
                    i--;}

        }else if (fumantes==0 && nao>0){
            printf("\nBem-vindo a area de reservas! \n");
            printf("Mesas indisponiveis na area de fumantes \n");
            printf("Mesas disponiveis na area de nao fumantes: %d \n",nao);
            printf("\nDigite (n) se deseja realizar sua reserva \n");
            scanf("%c",&resposta);
            fflush(stdin);
                if (resposta == 'n'){
                    nao=nao-1;
                }else{
                    printf("\n Nao entendi sua resposta \n");
                    i--;}

        }else if (fumantes>0 && nao==0){
            printf("\nBem-vindo a area de reservas! \n");
            printf("Mesas indisponiveis na area de nao fumantes \n");
            printf("Mesas disponiveis na area de fumantes: %d \n",fumantes);
            printf("\nDigite (f) se deseja realizar sua reserva \n");
            scanf("%c",&resposta);
            fflush(stdin);
                if (resposta == 'f'){
                    nao=nao-1;
                }else{
                    printf("\nNao entendi sua resposta \n");
                    i--;}

        }else if (fumantes==0 && nao==0){
            printf("\nBem-vindo a area de reservas! \n");
            printf("\nMesas indisponiveis para reserva ;( \n");
        }
    }
    return 0;
}
