#include <stdio.h>
#include <stdlib.h>

int z=8;

int main(int argc, char** argv) {

    printf("la direccion de z es %p y contiene %d",&z,z);
    return (EXIT_SUCCESS);
}

