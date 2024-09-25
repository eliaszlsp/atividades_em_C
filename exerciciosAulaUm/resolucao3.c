#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int resultOne;
    float resultTwo;
    resultOne = 7 / 2;
    resultTwo = 7 / 2.0;
    printf("O consumo de Bytes da operação matemática 7/2 é %zu\n", sizeof(resultOne));
    printf("O consumo de Bytes da operação matemática 7/2.0 é %zu\n", sizeof(resultTwo));

    return 0;
}
