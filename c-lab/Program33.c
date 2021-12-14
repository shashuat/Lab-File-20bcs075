// Program 33: Program to sort an array of type integer

#include <stdio.h>
 
void swap(int* xp, int* yp);
void selectionSort(int arr[], int n);
void printArray(int arr[], int size);

  
// Driver code
int main()
{
    int n;
    int arr[n];

    printf("Enter number of elements; ");
    scanf("%d", n);

    printf("Enter elements: ");
    for (int i = 0; i < n; ++i)
    {
    scanf("%d", arr + i);
    }

    printf("Original array: \n");
    printArray(arr, n);
 
    selectionSort(arr, n);
    printf("\nSorted array in Ascending order: \n");
    printArray(arr, n);
 
    return 0;
}

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Function to perform Selection Sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

// Function to print an array 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

