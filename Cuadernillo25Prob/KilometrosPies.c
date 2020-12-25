#include <stdio.h>
#include <stdlib.h>

float m,p;
int t;

int main(int argc, char** argv) {

    do{
        printf("desea converetir \n1. Pies a metros \n2. metros a pies \n0. Salir  ");
        scanf("%d",t);
        switch(t){
            case 1:
                pm();
                break;
            case 2:
                mp();
                break;
            case 0:
                break;
            default:
                printf("Opcion no valida");
                break;
        }
    }while(t!=0);
    return (EXIT_SUCCESS);
}

void pm(){
    printf("Ingresa los pies");
    scanf("%f",&p);
    m=p*.3048;
    printf("son %f metros",m);
}

void mp(){
    printf("Ingresa los metros");
    scanf("%f",&m);
    p=m*3.28084;
    printf("son %f pies",p);
}