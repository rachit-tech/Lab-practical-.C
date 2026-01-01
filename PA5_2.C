/* Write aC program to rend a string and check whether it is a palindrome or not */
#include <stdio.h>
#include <string.h> 

int main() {
    char str[100]; 
    int length, i, j;
    int isPalindrome = 1; 

    
    printf("Enter a string: ");
    scanf("%s", str);

    
    length = strlen(str); 

    i = 0;
    j = length - 1;

    
    while (i < j) {
        
        if (str[i] != str[j]) {
            isPalindrome = 0; 
            break;            
        }
    
        i++;
        j--;
    }

    
    if (isPalindrome == 1) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0; 
}

