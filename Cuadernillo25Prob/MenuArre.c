#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

float x[8]={7.5,8,9,10,11,12,56,34};
float y[4]={3,5.8,3.2,1},z[12]={1,2,3,4,5,6,7,8,9,0,11,43};
int e=0,a;

int main(int argc, char** argv) {
    do{
        printf("seleccione el arreglo que desas imprimir 1,2 o 3 y 0 para salir  ");
        scanf("%d",&a);
        if(a==3){
            for(int i=0;i<12;i++){
                printf("%f \n",z[i]);
            }
        }
        if(a==2){
            for(int i=0;i<8;i++){
                printf("%f \n",x[i]);
            }
        }
        if(a==1){
            for(int i=0;i<4;i++){
                printf("%f \n",y[i]);
            }
        }
    }while(a!=0);
    return (EXIT_SUCCESS);
}