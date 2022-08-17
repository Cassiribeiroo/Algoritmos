#include <stdio.h>
#include <stdlib.h>

int main()
{
    float volume,raio,altura;

    printf("Digite o raio do cilindro em centimetros \n");
    scanf("%f",&raio);
    printf("Digite a altura do cilindro em centimetros \n");
    scanf("%f",&altura);

    volume=3.14*(pow((raio),2))*altura;

    printf("\nVolume da caixa d agua %.2f centimetros cubicos\n",volume);

    return 0;
}
