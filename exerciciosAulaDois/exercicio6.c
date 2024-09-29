#include <stdio.h>

int main()
{
    int falta;
    float media;
    printf("digite a falta e media do aluno");

    scanf("%i %f", &falta, &media);

    if (falta <= 5 && media >= 6)
    {
        printf("aprovado");
    }
    else
    {
        printf("reprovado");
    };
    return 0; // sucesso
}