#include <stdio.h>
#include <string.h>
int allTestsPassed = 1;
int errorCounter = 0;
char allMessages[10][50];

void fail(char[]);
void assertTrue(char[], int);

void assertTrue(char errorMessage[], int boolean) {
    if(boolean == 0){
        fail(errorMessage);
    }
}

void fail(char errorMessage[]) {
    allTestsPassed = 0;
    strcpy(allMessages[errorCounter], errorMessage);
    errorCounter += 1;
}

void writeResults() {
    int i;
    for(i = 0; i < errorCounter; i++) {
        printf("%s\n", allMessages[i]);
    }

    if(allTestsPassed == 1) {
        printf("\n\nAll tests passed. OK\n");
    } else {
        printf("\n\nNot all tests passed. FAILED\n");
    }
}



