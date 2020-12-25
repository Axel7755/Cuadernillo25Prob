#include <stdio.h>
#include <stdlib.h>

float x,y,r;

int main(int argc, char** argv) {

    printf("ingresa el apotema:\t");
    scanf("%f",&y);
    printf("ingresa el perimetro:\t");
    scanf("%f",&x);
    r=(x*y)/2;
    printf("El area del poligono es: %f",r);
    return (EXIT_SUCCESS);
}
