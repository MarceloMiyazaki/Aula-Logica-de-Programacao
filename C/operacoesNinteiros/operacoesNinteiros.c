#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x, y, z;
    printf("OPERAÇÕES SOBRE INTEIROS\nInsira o valor de x: ");
    scanf("%d", &x);
    printf("Insira o valor de y: ");
    scanf("%d", &y);

    z = x + y;
    printf("%d + %d = %d", x, y, z);

    z = x - y;
    printf("\n%d - %d = %d", x, y, z);

    z = x * y;
    printf("\n%d * %d = %d", x, y, z);

    z = x / y;
    printf("\n%d / %d = %d", x, y, z);

    z = x % y;
    printf("\n%d %% %d = %d", x, y, z);

    return 0;
}
