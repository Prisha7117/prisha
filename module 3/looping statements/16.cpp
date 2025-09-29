#include <stdio.h>
int main()
{
    int num, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (i <= num) {
        sum = sum + i;   
        i++;
    }

    printf("Sum = %d", sum);
}

