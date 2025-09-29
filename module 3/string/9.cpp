#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j;
    int maxCount = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character
    for (i = 0; str[i] != '\0'; i++) {
        // Skip spaces and special characters
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            int count = 1;
            // Count occurrences of str[i] in the rest of string
            for (j = i + 1; str[j] != '\0'; j++) {
                if (str[j] == str[i]) {
                    count++;
                }
            }

            // Update maximum
            if (count > maxCount) {
                maxCount = count;
                maxChar = str[i];
            }
        }
    }

    printf("Maximum occurring character: '%c' (appears %d times)\n", maxChar, maxCount);

    return 0;
}

