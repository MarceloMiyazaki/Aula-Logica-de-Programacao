#include<stdio.h>

int main()
{
    double xa,ya,xb,yb;
    char p;
    
    //coordenadas
    printf("exemplo: (x,y) (x,y)\ncoordenadas: ");
    scanf("%c %lf %c %lf %c %c %lf %c %lf %c", &p, &xa, &p, &ya, &p, &p, &xb, &p, &yb, &p);
    
    //matematics
    xa = (xa - xb) * (xa - xb);
    ya = (ya - yb) * (ya - yb);
    xb = sqrt(xa + ya);
    
    printf("DISTÂNCIA: %.2lf", xb);
    return 0;
}