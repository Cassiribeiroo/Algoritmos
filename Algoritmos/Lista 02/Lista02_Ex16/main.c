#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo;

    printf("Informe o saldo medio do ultimo ano \n");
    scanf("%f",&saldo);

    if (saldo <=200){
        printf("\nSaldo medio: %.2f reais \n",saldo);
        printf("Credito disponivel: 0 reais \n");
    }else if ((saldo>200)&&(saldo<=400)){
        printf("\nSaldo medio: %.2f reais \n",saldo);
        printf("Credito disponivel: %.2f reais \n",saldo*0.2);
    }else if ((saldo>400)&&(saldo<=600)){
        printf("\nSaldo medio: %.2f reais \n",saldo);
        printf("Credito disponivel: %.2f reais \n",saldo*0.3);
    }else{
        printf("\nSaldo medio: %.2f reais \n",saldo);
        printf("Credito disponivel: %.2f reais \n",saldo*0.4);
    }
    return 0;
}
