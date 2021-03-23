// Program 63: Program to find the sum of n natural numbers using function

#include <stdio.h>

int main() 
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) 
    {
        sum += i;
    }

    printf("Sum = %d", sum);
    
    return 0;
}
