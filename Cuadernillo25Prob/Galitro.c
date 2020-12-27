#include <stdio.h>
#include <stdlib.h>

float m,p;
int t;

int main(int argc, char** argv) {

    do{
        printf("desea converetir \n1. Galones a litros \n2. Litros a Galones \n0. Salir  ");
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
    printf("Ingresa los galones");
    scanf("%f",&p);
    m=p*3.785;
    printf("son %f litros",m);
}

void mp(){
    printf("Ingresa los litros");
    scanf("%f",&m);
    p=m/3.785;
    printf("son %f galones",p);
}