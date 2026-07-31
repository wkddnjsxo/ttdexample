#include "calculator.h"

int add(int left, int right) {
    return left + right;
}

int fizzbuzz(int inputNumber){
    
    int result = 0;

    if(inputNumber % 3 == 0){
        result = 300;
    }
    else if(inputNumber % 5 ==0){
        result = 500;
    }
    return result;
}