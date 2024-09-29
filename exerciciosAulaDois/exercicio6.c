#include <stdio.h>

int main()
{
    int falta;
    float media;
    printf("digite a media e nota do aluno");

    scanf_s("%i %f", &falta, &media);

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