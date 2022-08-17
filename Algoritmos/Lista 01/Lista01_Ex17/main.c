#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius,fahrenheit;

    printf("Digite a temperatura em graus celsius \n");
    scanf("%f",&celsius);

    fahrenheit=(celsius*1.8)+32;

    printf("Temperatura em Fahrenheit: %.2f",fahrenheit);

    return 0;
}
