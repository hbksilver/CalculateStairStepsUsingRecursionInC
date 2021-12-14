#include <stdio.h>
// Calculate number of steps to reach a top of stairway
//only one or two steps at a time
//developed by: Hassan Baraka
//12/14/2021

// a function that calculates the steps
int calculateStairSteps(int stairCaseCount);

// main method or function
int main();

int main() {
    int myNumber = 3;
    printf("%d\n", calculateStairSteps(myNumber));
    return 0;
}

int calculateStairSteps(int stairCaseCount) {
    return stairCaseCount == 0 ? 1 : calculateStairSteps(stairCaseCount - 2)
                                     + calculateStairSteps(stairCaseCount - 1);
}



