#include <stdio.h>
#include <stdlib.h>

float x,y,r,h;
int t;

int main(int argc, char** argv) {

    do{
        printf("El area de que poligono de sea calcular? \n1. Triangulo \n2. Cuadrado,rectangulo o romboide \n3. Trapecio, \n4. Poligono de mas de 4 lados \n0.Salir \t");
        scanf("d",&t);
        switch(t){
            case 1:
                triangulo();
                break;
            case 2:
                cuadRecRomb();
                break;
            case 3:
                trapecio();
                break;
            case 4:
                Polig5();
                break;
            case 0:
                break;
            default:
                printf("opcion no valida");
                break;
            printf("El area es:  %f",r);
        }
        
    }while(t!=0);
    return (EXIT_SUCCESS);
}

void triangulo(){
    printf("ingresa la altura:\t");
    scanf("%f",&y);
    printf("ingresa la base:\t");
    scanf("%f",&x);
    r=(x*y)/2;
}

void cuadRecRomb(){
    printf("ingresa la altura:\t");
    scanf("%f",&y);
    printf("ingresa la base:\t");
    scanf("%f",&x);
    r=x*y;
}

void trapecio(){
    printf("ingresa la base menor:\t");
    scanf("%f",&y);
    printf("ingresa la base mayor:\t");
    scanf("%f",&x);
    printf("ingresa la altura:\t");
    scanf("%f",&h);
    r=((x+y)/2)*h;
    
}

void Polig5(){
    printf("ingresa el apotema:\t");
    scanf("%f",&y);
    printf("ingresa el perimetro:\t");
    scanf("%f",&x);
    r=(x*y)/2;
}
