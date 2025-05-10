#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void anal(int a,int b)
{
    if(a % b ==0)
        printf("%d divide %d\n", b, a);
    else
        printf("%d NÃO divide %d\n",b ,a);
}

int main()
{
    int x = 1;

    setlocale(LC_ALL, "Portuguese");
    while(x != 0){
        printf("Insira o valor a ser analisado: ");
        scanf("%d", &x);
        anal(x, 2);
        anal(x, 3);
        anal(x, 5);
        anal(x, 7);
        anal(x, 13);
        anal(x, 17);
        anal(x, 19);
        anal(x, 23);
        printf("\n\n");
    }
    return 0;
}
