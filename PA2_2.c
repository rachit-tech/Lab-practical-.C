/*  Comparing Two Numbers Without Conditional Statements 
A bank’s internal tool needs to find out which of two account balances is higher, but the program 
cannot use any conditional statements (like if, else, or ternary operators). 
Write a C program that:         
Takes two account balances as input (float). 
Uses relational and logical operators to determine: 
o    Whether both balances are equal. 
o    Whether the first balance is greater than the second. 
o    Whether the second balance is greater than the first.         
3.     
Displays the results as 1 (True) or 0 (False) for each condition*/

#include <stdio.h>

int main() {
    float balance1, balance2;

    // Prompt the user for input
    printf("Enter the first account balance: ");
    scanf("%f", &balance1);

    printf("Enter the second account balance: ");
    scanf("%f", &balance2);

    // Use relational and logical operators to determine the conditions
    // The results (1 or 0) are directly used in the print statements
    int both_equal = (balance1 == balance2);
    int first_greater = (balance1 > balance2);
    int second_greater = (balance2 > balance1);

    // Display the results
    printf("\nComparison Results (1 = True, 0 = False):\n");
    printf("Both balances are equal: %d\n", both_equal);
    printf("The first balance is greater than the second: %d\n", first_greater);
    printf("The second balance is greater than the first: %d\n", second_greater);

    return 0;
}
