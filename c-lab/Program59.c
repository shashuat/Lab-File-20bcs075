// Program 59: Program to find sort each string in a two dimensional array

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
  
// Function to sort the values 
void sort(char** names, int n) 
{ 
    int i, j; 
  
    // Perform sort operation using bubble sort 
    for (i = 0; i < n - 1; i++) 
        for (j = 0; j < n - i - 1; j++) 
            if (strcmp(names[j], names[j + 1]) > 0) { 
                char* temp; 
                temp = (char*)calloc(30, sizeof(char)); 
                strcpy(temp, names[j]); 
                strcpy(names[j], names[j + 1]); 
                strcpy(names[j + 1], temp); 
            } 
} 
  
// Driver code 
int main() 
{ 
    char** names; 
    int n, i; 
    printf("Enter the number of names to be printed: "); 
    scanf("%d\n", &n); 
  
    // allocating memory for 1st dimension 
    names = (char**)calloc(n, sizeof(char*)); 
  
    for (i = 0; i < n; i++) 
    // allocating memory for 2nd dimension 
    { 
        names[i] = (char*)calloc(30, sizeof(char)); 
        scanf("%s", names[i]); 
    } 
    sort(names, n); 
  
    printf("\nArray after sorting:\n"); 
    for (i = 0; i < n; i++) 
        printf("%s\n", names[i]); 
  
    return 0; 
} 