#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura_menor=500, altura_maior=0,altura;

    for(int i=0; i<5; i++){
        printf("Informe a altura da pessoa %d \n",i+1);
        scanf("%f",&altura);

        if(altura<altura_menor){
            altura_menor=altura;

        }else if(altura>altura_maior){
            altura_maior=altura;
        }
    }

    printf("\n Altura menor: %.2f \n",altura_menor);
    printf("\n Altura maior: %.2f \n",altura_maior);

    return 0;
}
