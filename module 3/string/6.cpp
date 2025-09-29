//6. Write a program in C to count the total number of alphabets,
//digits and specialcharacters in a string.
//7. Write a program in C to copy one string to another string.
//8. Write a program in C to count the total number of vowels or
//consonants in astring.
//9. Write a program in C to find the maximum number of
//characters in a string.
//10.Write a program in C to extract a substring from a given string
//11.Write a program in C to read a sentence and replace
//lowercase characters withuppercase and vice versa.
//12.Write a program in C to find the number of times a given
//word 'is' appears inthe given string.
//13.Write a program in C to remove characters from a string
//except alphabets.14.Write a program in C to combine two
//strings manually
//15.Write a program in C to find the largest and

#include <stdio.h>

int main() {
	
    char str[200];
    int i, alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   

    for (i = 0; str[i] != '\0'; i++) {
        if (alphabets(str[i])) {
            alphabets++;
        } 
        else if (digit(str[i])) {
            digits++;
        } 
        else if (str[i] != '\n') { 
            special++;
        }
    }

    printf("\nTotal Alphabets = %d\n", alphabets);
    printf("Total Digits = %d\n", digits);
    printf("Total Special Characters = %d\n", special);

    return 0;
}












