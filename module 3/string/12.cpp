//.Write a program in C to find the number of times a given
//word 'is' appears inthe given string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);

    for (i = 0; i < len - 1; i++) {
        // Check if current and next character form "is"
        if (str[i] == 'i' && str[i + 1] == 's') {
            count++;
        }
    }

    printf("The word 'is' appears %d times in the string.\n", count);

    return 0;
}

