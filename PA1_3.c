/* Write a C program to demonstrate the difference between ++x (pre-increment) and x++ 
(post-increment) in an arithmetic expression.  */
#include <stdio.h>

int main() {
    int x, y;

    printf("--- Pre-increment Example (--x) ---\n");
    x = 5;
    printf("Initial value of x: %d\n", x);
    y = ++x; 
    printf("Value of y after y = ++x: %d\n", y);
    printf("Final value of x: %d\n\n", x);     


    printf("--- Post-increment Example (x++) ---\n");
    x = 5;
    printf("Initial value of x: %d\n", x);

    y = x++; 
    printf("Value of y after y = x++: %d\n", y); 
    printf("Final value of x: %d\n\n", x);    

    
    printf("--- Complex Expression Example ---\n");
    x = 10;
    int a, b;
    
    a = x + x++; 
    printf("After a = x + x++:\n");
    printf("Value of a: %d\n", a); 
    printf("Value of x: %d\n", x); 

    x = 10;
    
    b = x + ++x; 
    printf("\nAfter b = x + ++x:\n");
    printf("Value of b: %d\n", b); 
    printf("Value of x: %d\n", x);

    return 0;
}

