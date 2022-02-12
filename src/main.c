#include <stdio.h>
#include <stdlib.h>
#include "funcPtrCalc.h"

int main(int argc, char **argv){

    if(argc == 4)
        executeCalc(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
    else
        printf("retry!");
    return 0;
}