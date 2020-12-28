#include <stdio.h>
#include <stdlib.h>

int z=8,*ap;

int main(int argc, char** argv) {

    ap=&z;
    printf("la direccion del apuntador ap es %p",&ap);
    return (EXIT_SUCCESS);
}

