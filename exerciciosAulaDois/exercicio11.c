#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float x, y;
    char o;

    printf("Expressão? ");
    scanf_s("%f %c %f", &x, &o, &y);

    switch (o)
    {
    case '+':
        printf("Valor = %.2f\n", x + y);
        break;
    case '-':
        printf("Valor = %.2f\n", x - y);
        break;
    case '*':
    case 'x':
        printf("Valor = %.2f\n", x * y);
        break;
    case '/':
    case ':':
        if (y == 0)
        {
            printf("Erro: Divisão por zero.\n");
        }
        else
        {
            printf("Valor = %.2f\n", x / y);
        }
        break;
    default:
        printf("Operador inválido: %c\n", o);
    }

    return 0;
}
