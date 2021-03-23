// Program to read n numbers in an array. Display count of -ve and +ve numbers. Derive m which should be added to all –ve numbers so as they are converted to either zero or +ve number.

#include <stdio.h> 

int countPositiveNumbers(int* arr, int n);
int countNegativeNumbers(int* arr, int n);
int Lowest(int arr[], int n);
void printArray(int* arr, int n);

int main() 
{ 
    int i, n, j, m;   
    int arr[n]; 

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printArray(arr, n); 
  
    printf("Count of Positive elements = %d\n", 
           countPositiveNumbers(arr, n)); 
    printf("Count of Negative elements = %d\n", 
           countNegativeNumbers(arr, n)); 

// M to be added to negative number to make them atleast 0

    j = Lowest(arr, n);
    m = j * -1;

    printf("M to be added to make all -ve numbers atleast 0 = %d\n", &m);

    return 0; 
} 


int countPositiveNumbers(int* arr, int n) 
{ 
    int pos_count = 0; 
    int i; 
    for (i = 0; i < n; i++) { 
        if (arr[i] > 0) 
            pos_count++; 
    } 
    return pos_count; 
} 
  
int countNegativeNumbers(int* arr, int n) 
{ 
    int neg_count = 0; 
    int i; 
    for (i = 0; i < n; i++) { 
        if (arr[i] < 0) 
            neg_count++; 
    } 
    return neg_count; 
} 
  
int lowest(int arr[], int n)
{
    int i;
    
    int min = arr[0];

    for (i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}
void printArray(int* arr, int n) 
{ 
    int i; 
  
    printf("Array: "); 
    for (i = 0; i < n; i++) { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
} 