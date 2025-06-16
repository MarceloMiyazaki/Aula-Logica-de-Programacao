#include <stdio.h>
#include <stdlib.h>

void main()
{
    int q = 1;
    double p, t;

    printf("exemplo: 2 4.5\n2 miojos que custam 4.50 cada\n");

    while(q != NULL){
        printf("Digite a quantidade e o valor do produito: ");
        scanf("%d %lf", &q, &p);
        t += q * p;
    }

    printf("\nValor total: %.2lf", t);
}
