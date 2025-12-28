/*Write a C program to declare variables of type int, float, char, and double. Initialize them 
with values and print their values and sizes using sizeof operator */
#include <stdio.h>

int main() {
    // Declare and initialize variables
    int intVar = 10;
    float floatVar = 3.14f;
    char charVar = 'A';
    double doubleVar = 123.456;

    // Print the values and sizes of the variables
    printf("Value of intVar: %d\n", intVar);
    printf("Size of intVar: %zu bytes\n", sizeof(intVar));
    printf("\n");

    printf("Value of floatVar: %f\n", floatVar);
    printf("Size of floatVar: %zu bytes\n", sizeof(floatVar));
    printf("\n");

    printf("Value of charVar: %c\n", charVar);
    printf("Size of charVar: %zu byte(s)\n", sizeof(charVar));
    printf("\n");

    printf("Value of doubleVar: %lf\n", doubleVar);
    printf("Size of doubleVar: %zu bytes\n", sizeof(doubleVar));
    printf("\n");

    return 0;
}
