#include <stdio.h>
#include <stdlib.h>

int aymane()
{
    printf("hi aymane \n");
    float PI = 3.14;
    float R, air;
    printf("entrer le nombre de rayon : \n");
    scanf("%f", &R);
    air = (R * R) * PI;
    printf("%.2f", air);

    return 0;
}
