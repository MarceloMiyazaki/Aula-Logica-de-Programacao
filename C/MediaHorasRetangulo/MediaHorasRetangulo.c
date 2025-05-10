#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    float x, y, z;
    int  dias, hrs, mins, sec;
    char resp[50] = "";

    printf("SELECIONE O MODO\nmedia -> calcule a media de duas notas\nsegundos -> converta segundos a tempo\nretangulo -> calcule area de um retangulo\n");
    scanf("%s", &resp);
    printf("====================\n");

    // MEDIA
    if(!strcmp(resp,"media")){
        printf("SELECIONADO PARA CALCULAR MEDIA\nValor nota 1: ");
        scanf("%f", &x);
        printf("Valor nota 2: ");
        scanf("%f", &y);
        z = (x+y)/2;
        printf("Media: %.2f", z);
    }

    // SEGUNDOS
    else if(!strcmp(resp,"segundos")){
        printf("SELECIONADO PARA CONVERTER SEGUNDOS PARA TEMPO\nInsira quantos segundos: ");
        scanf("%d", &sec);
        dias = sec/86400;
        sec = sec%86400;
        hrs = sec/3600;
        sec = sec%3600;
        mins = sec/60;
        sec = sec%60;
        printf("%d dias, %d hrs, %d mins e %d secs", dias, hrs, mins, sec);
    }

    // RETANGULO
    else if(!strcmp(resp,"retangulo")){
        printf("SELECIONADO PARA CALCULAR AREA DE UM RETANGULO\nInsira os valores dos lados: ");
        scanf("%f %f %f", &x, &y, &z);
        x = y * z * x;
        printf("A area do retangulo e %.2f", x);
    }

    // DEU RUIM
    else{
        printf("deu ruim");
    }

}
