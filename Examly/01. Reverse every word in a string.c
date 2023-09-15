#include <stdio.h>
#include <string.h>

// Function to reverse a word in-place
void reverseWord(char *word) {
    int length = strlen(word);
    for (int i = 0; i < length / 2; i++) {
        char temp = word[i];
        word[i] = word[length - i - 1];
        word[length - i - 1] = temp;
    }
}

int main() {
    char input[1000];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the trailing newline character
    input[strcspn(input, "\n")] = '\0';

    char *token = strtok(input, " "); // Tokenize the input by space
    while (token != NULL) {
        reverseWord(token); // Reverse the current word
        printf("%s ", token); // Print the reversed word
        token = strtok(NULL, " "); // Get the next word
    }

    printf("\n");
    return 0;
}
