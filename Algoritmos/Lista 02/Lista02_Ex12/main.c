#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;

    printf("Informe o valor do lado 1 do triangulo \n");
    scanf("%d",&x);
    printf("\nInforme o valor do lado 2 do triangulo \n");
    scanf("%d",&y);
    printf("\nInforme o valor do lado 3 do triangulo \n");
    scanf("%d",&z);

    if ((x<y+z)&&(y<x+z)&&(z<x+y)){
        if((x==y)&&(y==z)){
            printf("\nTriangulo equilatero \n");
        }else if((x==y)||(y==z)||(x==z)){
            printf("\nTriangulo isoceles \n");
        }else{
            printf("\nTriangulo escaleno \n");
        }
    }else{
        printf("\nNao eh triangulo \n");
    }

    return 0;
}
