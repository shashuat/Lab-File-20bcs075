// Lab 2 Program 4 : Write a C Program to Convert unordered list into ordered one Using Bubble Sort

#include <stdio.h>

void swap(int *xp, int *yp);
void printArray(int arr[], int size);
void bubbleSort(int arr[], int n);

int main()
{
    int n;
    int arr[n];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &n);
    }

    bubbleSort(arr, n);
    
    printf("Sorted array: \n");
    
    printArray(arr, n);
    
    return 0;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
// bubble sort function
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
  
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}
  
// print array funtion
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
  
