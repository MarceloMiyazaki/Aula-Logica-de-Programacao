#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

int main()
{
    int i;
    char vet1[3][MAX], vet2[3][MAX], vet3[3][MAX];

    for(i==0; i<3; i++){
        printf("Valor %d do vet1: ", i);
        scanf("%s", &vet1[i]);
        printf("Valor %d do vet2: ", i);
        scanf("%s", &vet2[i]);
        strcpy(vet3[i], vet1[i]);
        strcat(vet3[i], vet2[i]);
    }

    printf("%s\n", vet3[0]);
    printf("%s\n", vet3[1]);
    printf("%s\n", vet3[2]);

    return 0;
}
