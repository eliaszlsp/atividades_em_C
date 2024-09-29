#include <stdio.h>
#include <locale.h>

int main()
{
    int falta;
    float media;
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("digite a quantidade  falta e nota do aluno");

    scanf("%i %f", &falta, &media);

    if (falta <= 5 && media >= 6)
    {
        printf("aprovado");
    }
    else if (falta <= 5 && media < 6 && media > 4)
    {
        printf("recuperação\n");
    }
    else
    {
        printf("reprovado");
    };
    return 0; // sucesso
}