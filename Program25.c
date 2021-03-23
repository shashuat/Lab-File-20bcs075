// Program 25: Program to find if the number is Palindrome or not

#include <stdio.h>

int main() 
{
    int n, reversedNum = 0, remainder, originalNum;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNum = n;

    // reversed integer is stored in reversedN
    while (n != 0) {
        remainder = n % 10;
        reversedNum = reversedNum * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (originalNum == reversedNum)
        printf("%d is a palindrome.", originalNum);
    else
        printf("%d is not a palindrome.", originalNum);


    return 0;
}