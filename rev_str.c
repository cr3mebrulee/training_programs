#include <stdio.h>
#include <string.h>

void reversePrintWord(char *str) {
    // Base case: if the string is empty, return
    if (*str == '\0') {
        return;
    }
    
    // Recursive call to print the rest of the string
    reversePrintWord(str + 1);

    // Print the current character
    printf("%c", *str);
}

int main() {
    char word[100];

    // Input a word
    printf("Enter a word: ");
    scanf("%s", word);

    // Call the recursive function to print the word in reverse
    printf("Word in reverse: ");
    reversePrintWord(word);
    printf("\n");

    return 0;
}


