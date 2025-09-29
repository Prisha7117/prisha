// Write a program to find out the max number from given array
////using function //1

#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0]; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {  
            max = arr[i];    
        }
    }
    return max; 
}

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int maximum = findMax(arr, n);


    printf("Maximum number in the array is: %d\n", maximum);

    return 0;
}

