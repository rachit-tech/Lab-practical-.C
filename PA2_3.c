/* A company wants to develop a simple login authentication system in C. 
The system should check whether the entered username and password match the correct ones 
stored in the system. */
#include <stdio.h>
#include <string.h>

int main() {

    const char correct_username[] = "admin";
    const char correct_password[] = "1234";
    char input_username[50];
    char input_password[50];


    printf("Enter username: ");
    scanf("%s", input_username); 
    printf("Enter password: ");
    scanf("%s", input_password);

    if (!strcmp(input_username, correct_username) && !strcmp(input_password, correct_password)) {
        
        printf("Login Successful.\n");
    } else {
        
        printf("Invalid Login.\n");
    }

    return 0;
}

