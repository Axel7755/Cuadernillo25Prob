#include <stdio.h>
#include <stdlib.h>

float x,y,r;

int main(int argc, char** argv) {

    printf("ingresa la altura:\t");
    scanf("%f",&y);
    printf("ingresa la base:\t");
    scanf("%f",&x);
    r=x*y;
    printf("El area del rectangulo es: %f",r);
    return (EXIT_SUCCESS);
}
