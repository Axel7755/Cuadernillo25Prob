#include <stdio.h>
#include <stdlib.h>

float x,y,r,h;
int t;

int main(int argc, char** argv) {

    printf("1. Calcular area de un trapecio, 2. Otro cuadrilatero");
    scanf("%d",&t);
    if(t==1){
        printf("ingresa la base menor:\t");
    scanf("%f",&y);
    printf("ingresa la base mayor:\t");
    scanf("%f",&x);
    printf("ingresa la altura:\t");
    scanf("%f",&h);
    r=((x+y)/2)*h;
    printf("El area del rectangulo es: %f",r);
    }
    if(t==2){
    printf("ingresa la altura:\t");
    scanf("%f",&y);
    printf("ingresa la base:\t");
    scanf("%f",&x);
    r=x*y;
    printf("El area del rectangulo es: %f",r);
}
    return (EXIT_SUCCESS);
}
