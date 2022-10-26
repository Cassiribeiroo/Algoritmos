#include <stdio.h>
#include <stdlib.h>

int main()
{

    int vetI[10],vetJ[10],vetH[10];

    for (int i=0; i<10; i++){
        printf("Informe o numero %d do primeiro vetor \n",i+1);
        scanf("%d",&vetI[i]);
    }
    printf("\n");

    for (int j=0; j<10; j++){
        printf("Informe o numero %d do segundo vetor \n",j+1);
        scanf("%d",&vetJ[j]);
    }

    printf("\n");

    for (int h=0; h<10; h++){
        vetH[h]=vetI[h]+vetJ[h];
        printf("Soma dos vetores, posicao %d - [%d] \n",h+1,vetH[h]);
    }

    return 0;
}
