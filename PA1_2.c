/*  Write a C program to input two integers and perform addition, subtraction, multiplication, 
division, and modulus. Display the results. */
#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product, modulus_result;
    float quotient; 

    
    printf("Enter two integers: ");
    
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter two valid integers.\n");
        return 1; 
    }

    
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    
    if (num2 != 0) {
        
        quotient = (float)num1 / num2; 
        modulus_result = num1 % num2;

        
        printf("\nResults:\n");
        printf("Addition: %d + %d = %d\n", num1, num2, sum);
        printf("Subtraction: %d - %d = %d\n", num1, num2, difference);
        printf("Multiplication: %d * %d = %d\n", num1, num2, product);
        // Print quotient with 2 decimal places
        printf("Division: %d / %d = %.2f\n", num1, num2, quotient); 
        printf("Modulus: %d %% %d = %d\n", num1, num2, modulus_result);
    } else {
        
        printf("\nCannot perform division or modulus because the second number (num2) is zero.\n");
        printf("Addition: %d + %d = %d\n", num1, num2, sum);
        printf("Subtraction: %d - %d = %d\n", num1, num2, difference);
        printf("Multiplication: %d * %d = %d\n", num1, num2, product);
    }

    return 0; 
}
