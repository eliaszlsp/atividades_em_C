
/* #include <stdio.h> */

int main()
{
    int elevadoAoQuadadro;
    int result = 0;
    printf("digite o numero que deseja elevar ao quadrado\n? ");
    scanf("%d", &elevadoAoQuadadro);

    for (int i = 0; i < elevadoAoQuadadro * 2; i++)
    {
        if (i % 2 != 0)
        {
            result += i;
        }
    }
    printf(" resultado = %d", result);
    return 0;
}