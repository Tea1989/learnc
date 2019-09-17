#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    
    for (int i=0; i<argc; i++){
        printf("Arg %d: %s\n", i, argv[i]);
    }
    
    //Declare stak array
    char buffer[1000];
    buffer[0] = 'a';
    printf("Buffer[0] = %c\n", buffer[0]);
    printf("*buffer = %c\n", *buffer);
    
    /*printf("Hello\n");
    int *p = malloc(4);
    *p = 10;
    printf("p = %p : *p = %d\n", p, *p);
    free(p);*/
    
}