#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    printf("Digite o numero \n");
    scanf("%f",&n);

    if (n>=0) {
        printf("\nNumero positivo: %.2f \n",n*2);
    } else{
        printf("\nNumero negativo: %.2f \n",n*3);
    }

    return 0;
}
