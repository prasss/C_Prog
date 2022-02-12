#include "funcPtrCalc.h"

static int result;

void (*funcPtr[])(int a, int b) = {add, substract, divide, multiply};

void add(int a, int b){
    printf("\nAdditon operation: ");
    result = a + b;
}

void substract(int a, int b){
    printf("\nSubstraction operation: ");
    result = a - b;
}

void divide(int dividend, int divisor){    //a/b
    printf("\nDivision operation: ");
    if (divisor == 0){
        printf("\nDivide by zero attempted!");
        result = 0;
    }
    else{
        result = dividend/divisor;
    }
} 
void multiply(int a, int b){
    printf("\nMultiplication operation: ");
    result = a*b;
}

void printResult(){
    printf("\nresult: %d\n", result);
}

int printSomething(){
    printf("lalala!");

    return 0;
}

void executeCalc(int option, int a, int b){
    if(option <= 3){
        funcPtr[option](a,b);
        printResult();
    }
    else
        printf("retry with correct options!\n");
}