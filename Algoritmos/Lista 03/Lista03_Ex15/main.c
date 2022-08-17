#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero,nf=1;

    printf("Informe o numero que deseja realizar o calculo fatorial \n");
    scanf("%d",&numero);

    for (int i=1; i<=numero; i++){
        nf=nf*i;
    }

    printf("\n%d!= %d \n",numero,nf);
    return 0;
}
