#include <stdio.h>
#include <locale.h>

int main()
{
    float p1, p2, m;
    setlocale(LC_ALL, "pt_BR.UTF-8");
    printf("Notas? ");
    scanf("%f %f", &p1, &p2);
    m = (p1 + p2) / 2;
    if (m >= 6)
        puts("Aprovado");
    else
        puts("reprovado");

    return 0;
};
