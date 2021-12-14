// Lab 1 Program 2 : C program to insert an element in an Array

#include <stdio.h>

int main()
{
    int array[50], position, c, n, value;
    
    printf("Enter number of elements in the array\n");
    scanf("%d", &n);
    
    printf("Enter %d elements\n", n);
    
    for (c = 0; c < n; c++)    
        scanf("%d", &array[c]);
    
    printf("Enter the location where you want to insert an new element\n");
    scanf("%d", &position);
    
    printf("Enter the value\n");
    scanf("%d", &value);
    
    for (c = n - 1; c >= position - 1; c--)    
        array[c+1] = array[c];
    
    array[position-1] = value;
    
    printf("Resultant array is\n");
    
    for (c = 0; c <= n; c++)    
        printf("%d\n", array[c]);    
    
    return 0;
}