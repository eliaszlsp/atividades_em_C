#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int temperatura, calculo;

    printf("Digite a temperatura em Fahrenheit para que possamos converter em Celsius: ");
    scanf("%d", &temperatura);

    calculo = (temperatura - 32) / 1.8;

    printf("A temperatura em Celsius é %d° \n", calculo);
}