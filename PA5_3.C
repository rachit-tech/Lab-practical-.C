/* Write a C program to count the number  of words in a given string */ 
#include <stdio.h>
#include <string.h>

int count_words(char *str) {
    int count = 0;
    int in_word = 0; 
    while (*str) {
        
        if (*str == ' ' || *str == '\n' || *str == '\t') {
            in_word = 0; 
        } else {
            
            if (in_word == 0) {
                count++;
                in_word = 1; 
            }
        }
        
        str++;
    }

    return count;
}

int main() {
    char sentence[] = "This is a simple C program to count words.";
     

    int word_count = count_words(sentence);

    printf("The string is: \"%s\"\n", sentence);
    printf("Number of words: %d\n", word_count);

    return 0;
}
