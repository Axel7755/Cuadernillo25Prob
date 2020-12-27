#include <stdio.h>
#include <stdlib.h>

float bas,alt,anc,res;
int t;

int main(int argc, char** argv) {

    do{
        printf("\nQue desea realizar? \n1. Area de un triangulo \n2. Calcular el volumen de un prisma rectangular \n0.Salir \t");
        scanf("%d",&t);
        switch(t){
            case 1:
                Area();
                break;
            case 2:
                Volumen();
                break;
            case 0:
                break;
            default:
                printf("opcion no valida");
                break;
            
        }
        
    }while(t!=0);
    return (EXIT_SUCCESS);
}

void Area(){
    printf("ingrese la altura  ");
    scanf("%f",&alt);
    printf("ingrese la base  ");
    scanf("%f",&bas);
    res=(alt*bas)/2;
    printf("el resultado es %f",res);
}

void Volumen(){
    printf("ingrese la altura  ");
    scanf("%f",&alt);
    printf("ingrese la base  ");
    scanf("%f",&bas);
    printf("ingrese el ancho  ");
    scanf("%f",&anc);
    res=(alt*bas)*anc;
    printf("el resultado es %f",res);
}
