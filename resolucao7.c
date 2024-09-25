#include <stdio.h>
int main()
{
    float notaUm;
    float notaDois;
    float media;

    printf("digite as duas notas do aluno:");

    scanf("%f %f", &notaUm, &notaDois);

    media = (notaDois + notaUm) / 2;

    printf("a media do aluno é %f\n", media);

    return 0;
};