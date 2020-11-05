#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int x,y,z;
    
    printf("Introduzca tre numeros enteros separados por un espacio \n");
    scanf("%d %d %d",&x,&y,&z);
    
    if(x >= y){
        
        if(y>=z){
        
            printf("El mayor es %d seguido por %d y al ultimo %d\n\n",x,y,z);
        
        }else{ 
            
            printf("El mayor es %d seguido por %d y al ultimo %d\n\n",x,z,y);
            
        }
    }
    if(y >= x ){
        if(x>=z){
        
            printf("El mayor es %d seguido por %d y al ultimo %d\n\n",y,x,z);
        
        }else{ 
            
            printf("El mayor es %d seguido por %d y al ultimo %d\n\n",y,z,x);
            
        }
    }
    if(z >= x ){
        if(x>=y){
        
            printf("El mayor es %d seguido por %d y al ultimo %d\n\n",z,x,y);
        
        }else{ 
            
            printf("El mayor es %d seguido por %d y al ultimo %d\n\n",z,y,x);
            
        }
    }
    
    
    //printf("mundo %f \n", res);
    
    return (EXIT_SUCCESS);
}

