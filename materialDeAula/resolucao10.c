#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    float xp, yp, xq, yq, distancia;

    printf("Digite as coordenadas do ponto P (xp, yp): ");
    scanf("%f %f", &xp, &yp);

    printf("Digite as coordenadas do ponto Q (xq, yq): ");
    scanf("%f %f", &xq, &yq);

    distancia = sqrt(pow(xq - xp, 2) + pow(yq - yp, 2));

    printf("A distância entre os pontos P e Q é: %.2f\n", distancia);

    return 0;
}