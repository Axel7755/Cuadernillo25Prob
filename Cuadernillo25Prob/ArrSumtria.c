#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    long int Ar[10]={4,8};   
        
    for(int x=2;x<100;x++){
        
        Ar[x]=Ar[x-1]+Ar[x-2];
        
    }
    for(int y=0;y<10;y++){
        
        printf("%d \n",Ar[y]);
        
    }
        
    return (EXIT_SUCCESS);
}