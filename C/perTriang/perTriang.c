#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double lados, per;

    printf("Insira valor dos lados: ");
    scanf("%lf", &lados);
    per = lados;
    scanf("%lf", &lados);
    per = per + lados;
    scanf("%lf", &lados);
    per = per +lados;

    printf("O per�metro do tri�ngulo � %.2lf", per);

    return 0;
}
