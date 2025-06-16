#include <stdio.h>
#include <stdlib.h>

void main()
{
    int len;
    double nota, t;

    while(len != -4){
        printf("Digite a nota: ");
        scanf("%lf", &nota);
        if(nota==0) break;
        else{
            t += nota;
            len++;
        }
    }

    t = t/len;
    if(len==0) printf("Media: 0");
    else printf("Media: %.2lf", t);

}
