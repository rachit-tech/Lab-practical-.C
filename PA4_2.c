/*Write a C program to find the maximum of two numbers using a function that accepts 
pointer arguments. */
#include <stdio.h>

int max_of_two(int *num1, int *num2);

int main() {
    int a, b;
    int maximum;

    printf("Enter two numbers:\n");
    
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input. Please enter two valid integers.\n");
        return 1; 
    }

    
    maximum = max_of_two(&a, &b);

    printf("The maximum of %d and %d is %d\n", a, b, maximum);

    return 0;
}


int max_of_two(int *num1, int *num2) {
    
    if (*num1 > *num2) {
        return *num1; 
    } else {
        return *num2; 
    }
}
