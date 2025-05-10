#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y;
    printf("PAGAMENTO SEM TROCO\n1o valor: R$");
    scanf("%d", &x);
    printf("2o valor: R$");
    scanf("%d", &y);

    x += y;
    y = x/100;
    x -= y * 100;
    printf("\nQUANTIA DE NOTAS\nR$100,00: %d", y);

    y = x/50;
    x -= y * 50;
    printf("\nR$50,00: %d", y);

    y = x/20;
    x -= y *20;
    printf("\nR$20,00: %d", y);

    y = x/10;
    x -= y*10;
    printf("\nR$10,00: %d", y);

    y = x/5;
    x -= y*5;
    printf("\nR$5,00: %d", y);

    printf("\nFALTARÃO: R$%d,00\n\n\n", x);


    return 0;
}
