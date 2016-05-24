#include <stdio.h>
#include <string.h>
#include "calculator.h"
#include "tests.h"
#include "testmanager.h"

void sumTest();
void minusTest();
void multiplicationTest();
void divideTest();
void powerTest();
void facultyTest();

void sumTest() {
    int result = Calculator.sum(4, 6);
    if(result != 10){
        fail("SumTest failed");
    }

    float floatTest = Calculator.sum(4.5, 5);
    if(floatTest != 9.5) {
        fail("Sumtest float numbers failed");
    }
}

void minusTest() {
    int result = Calculator.minus(20, 4);
    if(result != 16) {
        fail("MinusTest failed");
    }

    float floatTest = Calculator.minus(5.5, 2);
    if(floatTest != 3.5) {
        fail("MinusTest float numbers failed");
    }
}

void multiplicationTest() {
    int result = Calculator.multiply(5,5);
    if(result != 25) {
        fail("multiplicationTest failed");
    }
    float floatTest = Calculator.multiply(3, 2.5);
    if(floatTest != 7.5) {
        fail("Muliplication float test failed");
    }
}


void divideTest() {
    float result = Calculator.divide(88, 4);
    if(result != 22) {
        fail("divideTest failed");
    }

    float divByZero = Calculator.divide(5, 0);
    if(divByZero != -1) {
        fail("divide() accepted a division by 0!");
    }

    float floatTest = Calculator.divide(9, 2);
    if(floatTest != 4.5) {
        fail("Divide() float test failed");
    }
}

void powerTest() {
    float result = Calculator.power(4, 2);
    float resultTwo = Calculator.power(3, 3);
    if(result != 16 || resultTwo != 27) {
        fail("PowerTest failed, unexpected value");
    }
}

void facultyTest() {
    int result = Calculator.faculty(6);
    if(result != 720) {
        fail("FacultyTest failed, unexpected value");
    }
}
                                                             
const struct test Test = {
    .sumTest = sumTest,
    .minusTest = minusTest,
    .multiplicationTest = multiplicationTest,
    .divideTest = divideTest,
    .powerTest = powerTest,
    .facultyTest = facultyTest,
    .writeResult = writeResults
};









