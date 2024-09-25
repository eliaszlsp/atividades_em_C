#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int distancia, combustivel, media;

    printf("Digite a distância percorrida e a quantidade de combustível inserida: \n");
    scanf("%d %d", &distancia, &combustivel);

    media = distancia / combustivel;

    printf("A média de consumo foi %d", media);
}