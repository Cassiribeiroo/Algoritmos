#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite o numero \n");
    scanf("%d",&n);

    if (n % 2 == 0){
        printf("\n O numero %d eh par \n",n);
    } else{
        printf("\n O numero %d eh impar \n",n);
    }

    return 0;
}
