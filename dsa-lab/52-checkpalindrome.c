// Lab 5 Program 2 : Write a C Program to check whether the string input is a palindrome or not.

#include <stdio.h>
#include <string.h>

#define SIZE 300

int main()
{
    char string1[SIZE];
    int i, length;
    int flag = 0;
    
    printf("Enter a string: \n");
    scanf("%s", string1);
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++)
    {
        if(string1[i] != string1[length-i-1])
        {
            flag = 1;
            break;
        }
    }
    
    if (flag) 
    {
        printf("%s is not a palindrome\n", string1);
    }    
    else 
    {
        printf("%s is a palindrome\n", string1);
    }

    return 0;
}