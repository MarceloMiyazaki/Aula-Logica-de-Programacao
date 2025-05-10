#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double min, sal, x;

    printf("Insira um salário mínimo: ");
    scanf("%lf", &min);
    printf("Insira um salário: ");
    scanf("%lf", &sal);
    x = sal/min;
    printf("%.2lf equivale à %.1lf salários mínimos.\n", sal, x);

    return 0;
}
