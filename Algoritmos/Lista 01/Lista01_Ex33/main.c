#include <stdio.h>
#include <stdlib.h>

int main()
{
    float basemaior,basemenor,altura,area;

    printf("Digite o valor da base maior do trapezio em cm \n");
    scanf("%f",&basemaior);
    printf("Digite o valor da base menor do trapezio em cm\n");
    scanf("%f",&basemenor);
    printf("Digite o valor da altura do trapezio em cm \n");
    scanf("%f",&altura);

    area=((basemaior+basemenor)*altura)/2;

    printf("\nArea do trapezio: %.2f cm quadrados\n",area);

    return 0;
}
