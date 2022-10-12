#include <stdio.h>

void out() {
    extern int g, sg;
    printf("\t\t\t%d\n", ++g);
    // printf("%d\n", ++sg); 
}