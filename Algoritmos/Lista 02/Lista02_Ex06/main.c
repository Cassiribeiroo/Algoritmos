#include <stdio.h>
#include <stdlib.h>

int main()
{
   float n1,n2,n3;

    printf("Digite o primeiro numero \n");
    scanf("%f",&n1);
    printf("Digite o segundo numero, diferente do primeiro \n");
    scanf("%f",&n2);
    printf("Digite o terceiro numero, diferente do primeiro e do segundo \n");
    scanf("%f",&n3);

    if ((n1>n2)&&(n2>n3)){
        printf("\nOrdem crescente: %.2f %.2f %.2f\n",n3,n2,n1);
    }else if ((n1>n3)&&(n3>n2)){
        printf("\nOrdem crescente: %.2f %.2f %.2f \n",n2,n3,n1);
    }else if ((n2>n1)&&(n1>n3)){
        printf("\nOrdem crescente: %.2f %.2f %.2f \n",n3,n1,n2);
    }else if ((n2>n3)&&(n3>n1)){
        printf("\nOrdem crescente: %.2f %.2f %.2f \n",n1,n3,n2);
    }else if ((n3>n1)&&(n1>n2)){
        printf("\nOrdem crescente: %.2f %.2f %.2f \n",n2,n1,n3);
    }else {
        printf("\nOrdem crescente: %.2f %.2f %.2f \n",n1,n2,n3);
    }

    return 0;
}
