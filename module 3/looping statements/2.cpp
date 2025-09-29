//2. WAP to accept 5 numbers from user and display all numbers
#include <stdio.h>
int main()
{
    int num[5];  
    
   
    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    
  
    printf("You entered:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
    
    return 0;
}

