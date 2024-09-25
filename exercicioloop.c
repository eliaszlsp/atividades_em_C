#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int numero;
    int contador;

    printf("qual a tabuada que vc deseja ?");

    scanf("%d", &numero);

    for (contador = 0; contador <= 10; contador++)
    {
        int tabuada = numero * contador;
        printf("%d x %d = %d\n", numero, contador, tabuada);
    }
};