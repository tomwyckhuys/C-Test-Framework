#include <stdio.h>
#include "calculator.h"

float sum(float numberOne, float numberTwo) {
    return numberOne + numberTwo;
}

float minus(float numberOne, float numberTwo){
    return numberOne - numberTwo;
}

float multiply(float numberOne, float numberTwo) {
    return numberOne * numberTwo;
}

float divide(float numberOne, float numberTwo) {
    if(numberTwo == 0) {
        return -1;
    }
    return numberOne / numberTwo;
}

float power(float base, int power) {
    int i;
    float result = base;
    for(i = 1; i < power; i++) {
       result *= base;
    }
    return result;
}

int faculty (int number) {
    int result = 1;
    int i;
    for(i = 1; i <= number; i++) {
        result *= i;
    }
    return result;
}

const struct calculator Calculator = {
    .sum = sum,
    .minus = minus,
    .multiply = multiply,
    .divide = divide,   
    .power = power,
    .faculty = faculty
};
