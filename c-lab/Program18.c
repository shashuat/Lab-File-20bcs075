// Program 18: Program to print sum of all even/ odd numbers between 1 to n

#include <stdio.h>

int main()
{
    int i, n, sum=0;

    /* Input upper limit from user */
    printf("Enter upper limit: ");
    scanf("%d", &n);

    for(i=2; i<=n; i+=2)
    {
        /* Add current even number to sum */
        sum += i;
        printf("Sum of all even number between 1 to %d = %d", n, sum);
    }

    for(i=1; i<=n; i+=2)
    {
        /* Add current odd number to sum */
        sum += i;
        printf("Sum of all odd number between 1 to %d = %d", n, sum);
    }

    return 0;
}