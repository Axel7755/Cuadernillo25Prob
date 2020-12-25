#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

float x[9]={-8,8,-9,-10,11,-12,56,-34,96};
float p[4]={},n[5];
int e=0,m=0;

int main(int argc, char** argv) {

    for(int i=0;i<9;i++){
        
        if(x[i]>=0){
           p[m]=x[i];
           m++;
        }
        if(x[i]<0){
            
            n[e]=x[i];
            e++;
        }
    }
    for(int i=0;i<4;i++){
        printf("los positivos son: %f \n",p[i]);
    }
    for(int i=0;i<5;i++){
        printf("los negativos son: %f \n",n[i]);
    }
    return (EXIT_SUCCESS);
}
