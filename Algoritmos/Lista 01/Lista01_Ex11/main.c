#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias,mes,ano,diassobra;

    printf("Digite o numero de dias \n");
    scanf("%d",&dias);

    ano=(dias/360);
    mes=((dias-(ano*360))/30);
    diassobra=dias%30;

    printf("\nAnos: %d \n",ano);
    printf("Meses: %d \n",mes);
    printf("Dias: %d \n",diassobra);

    return 0;
}
