/* #include <stdio.h>

int main()
{
    int valorASCII;
    printf("Digite um valor ASCII: ");
    scanf("%d", &valorASCII);

    char caractere = (char)valorASCII;
    printf("O caractere correspondente ao valor ASCII %d é %c\n", valorASCII, caractere);

    return 0;
}
 */

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    char a;

    printf("Digite um caractere para ver o seu correspondente na tabela ASCII \n");

    a = getchar();

    printf("O caratecere correspondente na tabela é: %d", a);

    return 0;
};