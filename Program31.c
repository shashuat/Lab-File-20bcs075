// Write a program using switch case to read one number and perform 1. Sum of digit 2. Reverse of number 3. Number is palindrome or not

#include<stdio.h>

int sumofdigit(int a);
int reverseofnum(int a);
int checkpalindrome(int a);

int main()
{
    int a;
    int op;

    printf("Enter your number : ");
    scanf("%d",&a);

    printf(" Enter The Action to perform\n 1. Sum of Digit\n 2. Reverse of Number\n 3. Number is Palindrome or not\n ");
    scanf("%d",&op);

    switch(op)
    {
        case 1 :
            int sumofdigit(int a);
            break;
        
        case 2 :
            int reverseofnum(int a);
            break;

        case 3 :
            int checkpalindrome(int a);
            break;

        default	:
            printf(" Enter Your Correct Choice.");
            break;
    }

    return 0;
}

