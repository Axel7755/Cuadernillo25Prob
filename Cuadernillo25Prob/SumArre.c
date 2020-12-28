#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int a[6]={
        1,4,7,2,7,3
    },b[6]={
        3,6,2,8,3,7
    };
    printf("La suma del posisionamiento de los arreglos es");
    for(int i=0;i<6;i++){
        printf("\n%d + %d = %d",a[i],b[i],a[i]+b[i]);
    }
    return (EXIT_SUCCESS);
}

