#include <stdio.h>
#include <stdlib.h>



int main(int argc, char** argv) {

    int n;
    printf("Ingrese la longitud de el arreglo \t");
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        printf("ingresa un numero: \n");
        scanf("%d",&x[i]);
    }
    
    for(int i=0;i<n;i++){
        printf("%d \n",x[i]);
    }
    return (EXIT_SUCCESS);
}