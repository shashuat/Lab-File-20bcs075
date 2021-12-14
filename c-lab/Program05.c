// Program 5: Program to swap the values of two variables with/without using the third variable

#include <stdio.h>
int main()
{
    int x = 10, y = 5;
 
    // Code to swap 'x' and 'y'
    x = x * y; // x now becomes 50
    y = x / y; // y becomes 10
    x = x / y; // x becomes 5
 
    printf("After Swapping: x = %d, y = %d", x, y);
 
    return 0;
}