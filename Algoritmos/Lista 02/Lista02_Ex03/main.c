#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Digite o valor de A \n");
    scanf("%d",&a);
    printf("Digite o valor de B \n");
    scanf("%d",&b);

    if(a==b) {
        printf("\nSoma de A e B: %d \n",a+b);

    } else{
        printf("\nA multiplicacao de A e B: %d \n",a*b);
    }

    return 0;
}

