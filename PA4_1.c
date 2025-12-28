/*Write a C program that uses a user-defined function to swap two numbers using call by 
reference. The function should take the addresses of the variables as parameters and 
modify their values. */

#include <stdio.h>


void swap(int *a, int *b);

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

   
    swap(&num1, &num2);

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}


void swap(int *a, int *b) {
    int temp;


    temp = *a;

    *a = *b;

    *b = temp;
}

