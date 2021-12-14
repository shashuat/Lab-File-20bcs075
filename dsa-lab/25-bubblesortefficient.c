// Lab 2 Program 5 : How do you apply bubble sort on sorted arrays. Make the sorting algorithm efficient by doing necessary changes in the algorithm and implement the same.

#include <stdio.h>

void bubbleSort(int arr[], int n);

int main()
{
    int n, temp, count;
    int arr[n];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }    
    
    bubbleSort(arr, n);
    
    return 0;   
}    

void bubbleSort(int arr[], int n)
{
    int i, j, temp, count;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                // swap the elements
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else
                count++;

        }
    }
    
    // print the sorted array
    printf("Sorted Array: ");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
        printf("number of saved swaps %d\n", count);
    }
}