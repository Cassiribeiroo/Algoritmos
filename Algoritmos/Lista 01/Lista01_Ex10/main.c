#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    double x1,x2,y1,y2,calculo,total;

    printf("Informe o numero x do primeiro ponto \n");
    scanf("%lf",&x1);
    printf("\nInforme o numero y do primeiro ponto \n");
    scanf("%lf",&y1);
    printf("\nInforme o numero x do segundo ponto \n");
    scanf("%lf",&x2);
    printf("\nInforme o numero y do segundo ponto \n");
    scanf("%lf",&y2);

    calculo=(pow((x2-x1),2))+(pow((y2-y1),2));
    total=sqrt(calculo);

    printf("\nA distancia entre dois pontos eh: %lf ",total);

    return 0;
}
