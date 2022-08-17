#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso,eng,emg;

    printf("Digite o peso em kg \n");
    scanf("%f",&peso);

    eng=(peso*0.15)+peso;
    emg=(peso*0.2)+peso;

    printf("\nPeso se engordar 15 porcento: %.2f kg \n",eng);
    printf("peso se emagrecer 20 porcento: %.2f kg \n",emg);

    return 0;
}
