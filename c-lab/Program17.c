// Program 17: Program to print 1 to 10 in ascending order and descending order on screen

#include<stdio.h>

void main()
{
    int n;

    // Ascending Order
    printf("Ascending Order: ");

    for(n=1;n<=10;n++)
    {
    printf(" %d",n);
    }

    printf("\n"); //for new line

    // Descending Order
    printf("Descending Order: ");

    for(n=10;n>=1;n--)
    {
    printf(" %d",n);
    }

    return 0;
}