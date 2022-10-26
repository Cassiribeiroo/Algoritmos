#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[8],b[8];

    for (int i=0; i<8; i++){
        printf("Informe o valor da posicao %d do vetor \n",i+1);
        scanf("%d",&a[i]);
    }

    for (int i=0; i<8; i++){
        b[i]=a[i]+a[i];
    }

    printf("\n");

    for (int i=0; i<8; i++){
        printf("Posicao %d [%d] \n",i+1,b[i]);
    }

    return 0;
}
