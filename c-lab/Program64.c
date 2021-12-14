// Program 64: Program to calculate factorial of a number using function

#include <stdio.h>

int factorial(int n);

int main()
{
    int n,ans;

    printf ("Enter a positive integer: ");
    scanf ("%d", &n);

    ans = factorial(n);

    printf ("Factorial of given number is: %d\n", &ans);

    return 0;
}

int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}