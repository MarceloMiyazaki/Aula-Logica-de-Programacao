#include <stdio.h>
#include <stdlib.h>

void analise(int n){
    if (n%2 == 0){
        printf("The number is even\n");}
    else{
        printf("The number is odd\n");}}

void main()
{
    int y = 1;

    while( y != NULL){
        printf("number: ");
        scanf("%d", &y);
        analise(y);
    }}
