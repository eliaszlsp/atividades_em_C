
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    float peso, altura, imc;
    printf("Qual o peso e a altura? ");
    scanf("%f %f", &peso, &altura);
    imc = peso / pow(altura, 2);
    printf("IMC = %.1f\n", imc);
    if (imc <= 30)
        printf("Não está obesa!\n");
    else
        printf("Está obesa!\n");
    return 0;
}