#include <stdio.h>
#include <stdlib.h>

int main()
{

    float l1,l2,area;

    printf("Digite o valor do lado 1 em cm \n");
    scanf("%f",&l1);
    printf("Digite o valor do lado 2 em cm \n");
    scanf("%f",&l2);

    area=l1*l2;

    printf("\nArea do quadrado: %.2f centimetros quadrados \n",area);

    return 0;
}
