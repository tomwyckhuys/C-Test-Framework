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
    assertTrue("SumTest failed", result == 10);

    float floatTest = Calculator.sum(4.5, 5);
    assertTrue("SumTest float number failed", floatTest == 9.5);
}

void minusTest() {
    int result = Calculator.minus(20, 4);
    assertTrue("MinusTest failed", result == 16);

    float floatTest = Calculator.minus(5.5, 2);
    assertTrue("MinusTest float numbers failed", floatTest == 3.5);
}

void multiplicationTest() {
    int result = Calculator.multiply(5,5);
    assertTrue("MultiplicationTest failed", result == 25);
    
    float floatTest = Calculator.multiply(3, 2.5);
    assertTrue("Multiplication float test failed", floatTest == 7.5);
}


void divideTest() {
    float result = Calculator.divide(88, 4);
    assertTrue("DivideTest failed", result == 22);

    float divByZero = Calculator.divide(5, 0);
    assertTrue("divide() accepted a division by 0!", divByZero == -1);

    float floatTest = Calculator.divide(9, 2);
    assertTrue("divide() float test failed", floatTest == 4.5);
}

void powerTest() {
    float result = Calculator.power(4, 2);
    float resultTwo = Calculator.power(3, 3);
    assertTrue("PowerTest failed, unexpected value", (result == 16 && resultTwo == 27)); 
}

void facultyTest() {
    int result = Calculator.faculty(6);
    assertTrue("FacultyTest failed, unexpected value", result == 720);
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









