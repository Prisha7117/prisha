//13.WAP to accept 5 numbers from user and check entered
//number is even or oddusing of array
//14.Perform 2D matrix array
#include <stdio.h>

int main() {
    int numbers[5];
    int i;

    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("\nEven/Odd check:\n");
    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is Even\n", numbers[i]);
        } else {
            printf("%d is Odd\n", numbers[i]);
        }
    }

    return 0;
}






