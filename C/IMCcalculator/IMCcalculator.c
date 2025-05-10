#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y;

    printf("INDICE DE MASSA CORPORAL\nDigite o peso em kg: ");
    scanf("%lf", &x);
    printf("Digite a altura em m: ");
    scanf("%lf", &y);

    x /= y*y;
    printf("Valor do IMC: %lf", x);
    return 0;
}
