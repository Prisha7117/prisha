//3. Write a program in C to print individual characters of a string in
//reverse order
//4. Write a program in C to count the total number of words in a
//string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read string safely

    // find length of string
    while (str[length] != '\0') {
        if (str[length] == '\n') {   // ignore newline character
            break;
        }
        length++;
    }

    printf("Characters of the string in reverse order:\n");

    // print characters in reverse
    for (i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}

