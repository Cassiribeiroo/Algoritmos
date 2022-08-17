#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p,m,g;
    float valor;

    printf("Informe o numero de camisetas Pequenas \n");
    scanf("%d",&p);
    printf("\nInforme o numero de camisetas Medias \n");
    scanf("%d",&m);
    printf("\nInforme o numero de camisetas Grandes \n");
    scanf("%d",&g);

    valor=(p*10)+(m*12)+(g*15);

    printf("\n%d camisetas Pequenas \n",p);
    printf("%d camisetas Medias \n",m);
    printf("%d camisetas Grandes \n",g);
    printf("Valor arrecadado %.2f reais \n",valor);

    return 0;
}
