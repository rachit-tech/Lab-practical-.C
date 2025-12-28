/* A bank wants to develop a simple program to update a customer’s account balance using 
assignment operators. */
#include <stdio.h>

int main() {
    
    float balance;
    float interest_rate = 0.05; 
    float maintenance_charge = 50.0; 
    float bonus_factor = 1.1; 
    int num_linked_accounts = 2;

    
    printf("Enter the customer's initial account balance: $");
    
    if (scanf("%f", &balance) != 1) {
        printf("Invalid input. Please enter a numerical value.\n");
        return 1; 
    }

    printf("\n--- Account Operations ---\n");

    float interest_amount = balance * interest_rate;
    balance += interest_amount;
    printf("Balance after adding interest: $%.2f\n", balance);

    
    balance -= maintenance_charge;
    printf("Balance after deducting maintenance charge: $%.2f\n", balance);

    balance *= bonus_factor;
    printf("Balance after applying bonus factor: $%.2f\n", balance);
    balance /= num_linked_accounts;
    printf("Balance after dividing among %d linked accounts: $%.2f\n", num_linked_accounts, balance);


    printf("\n--- Final Summary ---\n");
    printf("The final balance per linked account is: $%.2f\n", balance);

    return 0;
}
