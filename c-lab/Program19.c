// Program 19: Program to print multiplication table of n

#include <stdio.h>

int main() 
{
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; ++i) 
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }
    
    return 0;
}