/* Salary Calculation System A company wants to automate its employee salary 
calculation process using a C program. The program should take the following inputs from the user: 
● Employee name (string) ● Basic salary (float) Using arithmetic  */
#include <stdio.h>

int main() {

    char employeeName[50]; 
    float basicSalary;
    float hra, da, grossSalary, incomeTax, netSalary;

    
    printf("Enter employee name: ");
    
    fgets(employeeName, sizeof(employeeName), stdin);

    for (int i = 0; i < sizeof(employeeName); i++) {
        if (employeeName[i] == '\n') {
            employeeName[i] = '\0';
            break;
        }
    }

    printf("Enter basic salary: ");
    
    if (scanf("%f", &basicSalary) != 1 || basicSalary < 0) {
        printf("Invalid salary input. Please enter a positive number.\n");
        return 1; 
    }


    hra = 0.20 * basicSalary;
    da = 0.10 * basicSalary;
    grossSalary = basicSalary + hra + da;
    incomeTax = 0.05 * grossSalary;
    netSalary = grossSalary - incomeTax;


    printf("\n--- Salary Details ---\n");
    printf("Employee Name: %s\n", employeeName);
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA (20%%): %.2f\n", hra);
    printf("DA (10%%): %.2f\n", da);
    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Income Tax (5%%): %.2f\n", incomeTax);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}
  