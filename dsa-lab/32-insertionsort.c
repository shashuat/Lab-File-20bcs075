// Lab 3 Program 2 : Write a C program to implement Insertion Sort

#include <stdio.h>

void InserSort(int array[],int n);

int main()
{
    int arr[100], n, i;
    
    printf("Enter number of elements \n");
    scanf("%d", &n);
    
    printf("Enter %d Numbers \n", n);
    
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    InserSort(arr,n);
    
    return 0;
}

void InserSort(int arr[], int n)
{
    int i, key, j;
        for (i = 1; i < n; i++) 
        {
            key = arr[i];
            j = i - 1;
    
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    
    printf("Sorted Array: \n");
    
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
}