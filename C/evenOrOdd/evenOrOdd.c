#include <stdio.h>
#include <stdlib.h>

void anal(int n){
    if (n%2 == 0){
        printf("The number is even\n");}
    else{
        printf("The number is odd\n");}}

void main()
{
    int x = 1, y;

    while( x == 1){
        printf("number: ");
        scanf("%d", &y);
        anal(y);
    }}
