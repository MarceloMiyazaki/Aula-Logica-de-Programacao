#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void main()
{
    double a, b, c, d;

    setlocale(LC_ALL, "Portuguese");

    printf("Insira o valor de a: ");
    scanf("%lf", &a);
    printf("Insira o valor de b: ");
    scanf("%lf", &b);
    printf("Insira o valor de c: ");
    scanf("%lf", &c);

    c = (b*b) - (4*a*c);

    if( a >= 0){

        d = ((-b) + sqrt(c)) / (2 * a);
        b = ((-b) - sqrt(c)) / (2 * a);
        printf("==============================\nAs ra�zes quadradas da esqua��o s�o %.2lf e %.2lf\n", d, b);}

    else{
        printf("N�o possui ra�zes reais");}
}
