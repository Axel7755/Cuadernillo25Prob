#include <stdio.h>
#include <stdlib.h>

float min,hor,dia,hist[50];
int t,t2,t3=0;

int main(int argc, char** argv) {

    do{
        printf("\nQue desea convertir? \n1. Centimetros \n2. Metros \n3. Kilometros \n4. Historial \n0.Salir \t");
        scanf("%d",&t);
        if(t!=0&&t!=4){
            printf("A que desea convertir? \n1. Centimetros \n2. Metros \n3. Kilometros \n0.Salir \t");
            scanf("%d",&t2);
        }
        switch(t){
            case 1:
                switch(t2){
                    case 1:    
                        printf("ingrese centimetros  ");
                        scanf("%f",&min);
                        printf("son %f centimetros ",min);
                        hist[t3]=min;
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
                        printf("ingrese metros  ");
                        scanf("%f",&hor);
                        printf("son %f metros",hor);
                        hist[t3]=hor;
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
                        printf("ingrese kilometros  ");
                        scanf("%f",&hor);
                        printf("son %f kilometros",hor);
                        hist[t3]=hor;
                        break;
                }
                break;
            case 4:
                Historial();
                break;
            case 0:
                break;
            default:
                printf("opcion no valida");
                break;
            
        }
       t3++; 
    }while(t!=0&&t2!=0);
    return (EXIT_SUCCESS);
}

void MinHor(){
    printf("ingrese centimetros  ");
    scanf("%f",&min);
    hor=min/100;
    printf("son %f metros ",hor);
    hist[t3]=hor;
}

void MinDia(){
    printf("ingrese centimetros  ");
    scanf("%f",&min);
    dia=(min/100)/1000;
    printf("son %f Kilometros ",dia);
    hist[t3]=dia;
}

void HorMin(){
    printf("ingrese metros  ");
    scanf("%f",&hor);
    min=hor*100;
    printf("son %f centimetros",min);
    hist[t3]=min;
    
}

void HorDia(){
    printf("ingrese metros  ");
    scanf("%f",&hor);
    dia=hor/1000;
    printf("son %f kilometros",dia);
    hist[t3]=dia;
}

void DiaMin(){
    printf("ingrese kilometros  ");
    scanf("%f",&dia);
    min=(dia*1000)*100;
    printf("son %f centimetros",min);
    hist[t3]=min;
}

void DiaHor(){
    printf("ingrese kilometros  ");
    scanf("%f",&dia);
    hor=(dia*1000);
    printf("son %f metros",hor);
    hist[t3]=hor;
}
void Historial(){
    int n=0;
    printf("\nEl historial es:");
    while(n<t3){
      printf("\n%f",hist[n]);
      n++;
    }
}
