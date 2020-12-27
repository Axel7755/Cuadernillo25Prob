#include <stdio.h>
#include <stdlib.h>

float num1,num2,res,hist[50];
int t,t2=0;

int main(int argc, char** argv) {

    do{
        printf("\nQue desea realizar? \n1. suma \n2. resta \n3. division \n4. Multiplicacion \n5. Historial \n0.Salir \t");
        scanf("%d",&t);
        if(t!=0&&t!=5){
            printf("ingrese primer numero:  ");
            scanf("%f",&num1);
        }
        switch(t){
            case 1:
                Suma();
                break;
            case 2:
                Resta();
                break;
            case 3:
                Multiplicacion();
                break;
            case 4:
                Division();
                break;
            case 5:
                Historial();
                break;
            case 0:
                break;
            default:
                printf("opcion no valida");
                break;
            
        }
        hist[t2]=res;
        t2++;
    }while(t!=0&&t2!=0);
    return (EXIT_SUCCESS);
}

void Suma(){
    printf("ingrese el numero que sumara  ");
    scanf("%f",&num2);
    res=num1+num2;
    printf("el resultado es %f",res);
}

void Resta(){
    printf("ingrese el numero que restara  ");
    scanf("%f",&num2);
    res=num1-num2;
    printf("el resultado es %f",res);
}

void Multiplicacion(){
    printf("ingrese el numero que multiplicara  ");
    scanf("%f",&num2);
    res=num1*num2;
    printf("el resultado es %f",res);
}

void Division(){
    printf("ingrese el numero etre el que se dividira  ");
    scanf("%f",&num2);
    res=num1/num2;
    printf("el resultado es %f",res);
}

void Historial(){
    int n=0;
    printf("\nEl historial es:");
    while(n<t2){
      printf("\n%f",hist[n]);
      n++;
    }
}

