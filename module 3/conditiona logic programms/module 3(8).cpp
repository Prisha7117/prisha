#include <stdio.h>

int main() {
    int height;

    // Input height
    printf("Enter height of the person in cm: ");
    scanf("%d", &height);

    // Categorizing height
    if (height < 150) {
        printf("The person is Short.\n");
    } 
    else if (height >= 150 && height <= 165) {
        printf("The person is Average height.\n");
    } 
    else if (height > 165 && height <= 195) {
        printf("The person is Tall.\n");
    } 
    else {
        printf("The person has Abnormal height.\n");
    }

    return 0;
}

