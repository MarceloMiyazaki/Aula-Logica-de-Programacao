#include<stdio.h>

int main()
{
    double xa,ya,xb,yb;
    
    //primeiro ponto
    printf("x1: ");
    scanf("%lf", &xa);
    printf("y1: ");
    scanf("%lf", &ya);
    
    //segundo ponto
    printf("x2: ");
    scanf("%lf", &xb);
    printf("y2: ");
    scanf("%lf", &yb);
    
    //matematics
    xa = (xa - xb) * (xa - xb);
    ya = (ya - yb) * (ya - yb);
    xb = sqrt(xa + ya);
    
    printf("DISTÂNCIA: %.2lf", xb);
    return 0;
}