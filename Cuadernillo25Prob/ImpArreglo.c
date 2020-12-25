#include <stdio.h>
#include <stdlib.h>

float x[8]={7.5,8,9,10,11,12,56,34};

int main(int argc, char** argv) {

    for(int i=0;i<8;i++){
        printf("%f \n",x[i]);
    }
    return (EXIT_SUCCESS);
}