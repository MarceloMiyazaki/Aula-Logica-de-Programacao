#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias, hrs, mins, secs = 200000;

    dias = secs/86400;
    secs = secs%86400;
    hrs = secs/3600;
    secs = secs%3600;
    mins = secs/60;
    secs = secs%60;
    printf("%d dias, %d hrs, %d mins e %d secs", dias, hrs, mins, secs);
    printf("deu mal");

    return 0;
}
