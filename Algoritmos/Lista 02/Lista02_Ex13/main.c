#include <stdlib.h>

int main()
{
    int valor,rs100,rs10,rs5,rs1;

    printf("Informe o valor em reais \n");
    scanf("%d",&valor);

    rs100=valor/100;
    rs10=(valor-(rs100*100))/10;
    rs5=(valor-((rs100*100)+(rs10*10)))/5;
    rs1=valor-((rs100*100)+(rs10*10)+(rs5*5));

    printf("\nValor: %d reais \n",valor);
    printf("\nSao necessarias %d notas de 100 reais \n",rs100);
    printf("Sao necessarias %d notas de 10 reais \n",rs10);
    printf("Sao necessarias %d notas de 5 reais \n",rs5);
    printf("Sao necessarias %d notas de 1 real \n",rs1);

    return 0;
}
