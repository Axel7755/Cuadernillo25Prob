#include <stdio.h>
#include <stdlib.h>

int z=8,*ap;

int main(int argc, char** argv) {

    ap=&z;
    printf("la direccion de z es %p y contiene %d",&z,*ap);
    return (EXIT_SUCCESS);
}

