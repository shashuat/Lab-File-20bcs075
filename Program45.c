// Program to find the length of a string

#include <stdio.h>

int main() 
{
    int i;

    char str[20]; 
    gets(str); 
    printf("%s", str); 

    for (i = 0; str[i] != '\0'; ++i);
    
    printf("Length of the string: %d", i);

    return 0;
}