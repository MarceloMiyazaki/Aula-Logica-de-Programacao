#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double c, f, k;
    printf("Insira valor em graus C�: ");
    scanf("%lf", &c);
    f = (9*c+160) / 5;
    k = c + 273.15;

    printf("Valor em Fahrenheit: %.2lf\nValor em Kelvin: %.2lf\n", f, k);

    return 0;
}
