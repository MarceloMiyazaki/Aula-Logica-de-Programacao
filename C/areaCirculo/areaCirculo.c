#include <stdio.h>
#include <stdlib.h>

float area(float r){
    float area;
    area = 3.14159 * r * r;
    return area;
}

void main(){
    while(1){
        float r;
        printf("Valor do raio: ");
        scanf("%f", &r);
        r = area(r);
        printf("Valor da area: %f\n======================\n", r);
}}
