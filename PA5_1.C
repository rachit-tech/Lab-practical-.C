/*Write a C program to read n elements into an array and caleulate the sum and average of the 
clements */
#include <stdio.h>

int main() {
    
    int n, i;
    
    float arr[100], sum = 0.0, average;

    printf("Enter the number of elements (1 to 100): ");

    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        printf("Enter number%d: ", i + 1);
    
        scanf("%f", &arr[i]);
    
        sum += arr[i];
    }

    
    average = sum / n;

    
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}




