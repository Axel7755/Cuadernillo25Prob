#include <stdio.h>
#include <stdlib.h>

float min,hor,dia;
int t,t2;

int main(int argc, char** argv) {

    do{
        printf("\nQue desea convertir? \n1. Minutos \n2. Horas \n3. Dias \n0.Salir \t");
        scanf("%d",&t);
        if(t!=0){
            printf("A que desea convertir? \n1. Minutos \n2. Horas \n3. Dias \n0.Salir \t");
            scanf("%d",&t2);
        }
        switch(t){
            case 1:
                switch(t2){
                    case 1:    
                        printf("ingrese minutos  ");
                        scanf("%f",&min);
                        printf("son %f minutos ",min);
                        break;
                    case 2:    
                        MinHor();
                        break;
                    case 3:    
                        MinDia();
                        break;
                }
                break;
            case 2:
                switch(t2){
                    case 1:    
                        HorMin();
                        break;
                    case 2:    
                        printf("ingrese horas  ");
                        scanf("%f",&hor);
                        printf("son %f horas",hor);
                        break;
                    case 3:    
                        HorDia();
                        break;
                }
                break;
            case 3:
                switch(t2){
                    case 1:    
                        DiaMin();
                        break;
                    case 2:    
                        DiaHor();
                        break;
                    case 3:    
                        printf("ingrese dias  ");
                        scanf("%f",&hor);
                        printf("son %f dias",hor);
                        break;
                }
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

void MinHor(){
    printf("ingrese minutos  ");
    scanf("%f",&min);
    hor=min/60;
    printf("son %f horas ",hor);
}

void MinDia(){
    printf("ingrese minutos  ");
    scanf("%f",&min);
    dia=(min/60)/24;
    printf("son %f dias ",dia);
}

void HorMin(){
    printf("ingrese horas  ");
    scanf("%f",&hor);
    min=hor*60;
    printf("son %f minutos",min);
    
}

void HorDia(){
    printf("ingrese horas  ");
    scanf("%f",&hor);
    dia=hor/24;
    printf("son %f dias",dia);
}

void DiaMin(){
    printf("ingrese dias  ");
    scanf("%f",&dia);
    min=(dia*24)*60;
    printf("son %f minutos",min);
}

void DiaHor(){
    printf("ingrese dias  ");
    scanf("%f",&dia);
    hor=(dia*24);
    printf("son %f horas",hor);
}
