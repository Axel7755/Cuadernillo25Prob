#include <stdio.h>
#include <stdlib.h>

float num1,num2,res;
int t,t2;

int main(int argc, char** argv) {

    do{
        printf("\nQue desea realizar? \n1. suma \n2. resta \n3. division \n4. Multiplicacion \n0.Salir \t");
        scanf("%d",&t);
        if(t!=0){
            printf("ingrese primer numero");
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
            case 0:
                break;
            default:
                printf("opcion no valida");
                break;
            
        }
        
    }while(t!=0&&t2!=0);
    return (EXIT_SUCCESS);
}

void Suma(){
    printf("ingrese el numero que sumara  ");
    scanf("%f",&num2);
    res=num1+num2;
    printf("el resultado es",res);
}

void Resta(){
    printf("ingrese el numero que restara  ");
    scanf("%f",&num2);
    res=num1-num2;
    printf("el resultado es",res);
}

void Multiplicacion(){
    printf("ingrese el numero que multiplicara  ");
    scanf("%f",&num2);
    res=num1*num2;
    printf("el resultado es",res);
}

void Division(){
    printf("ingrese el numero etre el que se dividira  ");
    scanf("%f",&num2);
    res=num1/num2;
    printf("el resultado es",res);
}

