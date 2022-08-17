#include <stdio.h>
#include <stdlib.h>

int main()
{

    float cent1,cent5,cent10,cent25,cent50,real1,total;

    printf("Digite o numero de moedas de 1 centavo \n");
    scanf("%f",&cent1);
    printf("Digite o numero de moedas de 5 centavos \n");
    scanf("%f",&cent5);
    printf("Digite o numero de moedas de 10 centavos \n");
    scanf("%f",&cent10);
    printf("Digite o numero de moedas de 25 centavos \n");
    scanf("%f",&cent25);
    printf("Digite o numero de moedas de 50 centavos \n");
    scanf("%f",&cent50);
    printf("Digite o numero de moedas de 1 real \n");
    scanf("%f",&real1);

    total=(cent1*0.01)+(cent5*0.05)+(cent10*0.1)+(cent25*0.25)+(cent50*0.5)+(real1*1);

    printf("\n Valor total economizado: %.2f reais \n",total);

    return 0;
}
