#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Digite o numero \n");
    scanf("%d",&n);

    if (n%2==0){
        printf("\nSeu numero eh par, numero + soma: %d \n",n+5);
    } else{
        printf("\nSeu numero eh impar, numero + soma: %d \n",n+8);
    }

    return 0;
}
