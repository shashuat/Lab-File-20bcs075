// Program 22: Program to read a number and print each digit on separate line

#include <stdio.h> 
  
// Function to print the digit of number N 
void printDigit(int N) 
{ 
    int r; 
  
    // Base Case 
    if (N == 0) { 
        return; 
    } 
  
    // Extract the last digit 
    r = N % 10; 
  
    // Recursive call to next 
    // iteration 
    printDigit(N / 10); 
  
    // Print r 
    printf("%d ", r); 
} 
  
// Driver Code 
int main() 
{ 
    int N = 3452897; 
  
    printDigit(N); 
    return 0; 
} 