#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double min, sal, x;

    printf("Insira um sal�rio m�nimo: ");
    scanf("%lf", &min);
    printf("Insira um sal�rio: ");
    scanf("%lf", &sal);
    x = sal/min;
    printf("%.2lf equivale � %.1lf sal�rios m�nimos.\n", sal, x);

    return 0;
}
