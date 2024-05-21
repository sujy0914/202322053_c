#include <stdio.h>

int main() {
    int constants[] = {1,2,3};
    int *choice = constants;
    constants[0] = 2;
    constants[1] = constants[2];
    constants[2] = *choice;
    printf("I'm going to pick constants number %i\n", constants[2]);
}