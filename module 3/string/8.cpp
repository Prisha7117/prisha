#include <stdio.h>

int main() {
    char str[200];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        // Check vowels (both lowercase and uppercase)
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            vowels++;
        }
        // Check consonants (only alphabets that are not vowels)
        else if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')) {
            consonants++;
        }
        // Ignore digits, spaces, and special characters
    }

    printf("\nTotal Vowels = %d\n", vowels);
    printf("Total Consonants = %d\n", consonants);

    return 0;
}

