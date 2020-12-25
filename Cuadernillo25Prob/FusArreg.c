#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

float x[8]={7.5,8,9,10,11,12,56,34};
float y[4]={3,5.8,3.2,1},z[12];
int e=0;

int main(int argc, char** argv) {

    for(int i=0;i<12;i++){
        
        if(i<8){
           z[i]=x[i]; 
        }
        if(i>=8&&i<12){
            
            z[i]=y[e];
            e++;
        }
    }
    for(int i=0;i<12;i++){
        printf("%f \n",z[i]);
    }
    return (EXIT_SUCCESS);
}