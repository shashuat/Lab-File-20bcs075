// Lab 4 Program 1 : C Program to Implement Quick sort

#include <stdio.h>

void swap(int *a, int *b);

int partition(arr, int low, int high);

void QuickSort(arr,n);

int main()
{
    int arr[100], n, i;
    
    printf("Enter number of elements \n");
    scanf("%d", &n);
    
    printf("Enter %d Numbers \n", n);
    
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    QuickSort(arr,n);
    
    return 0;

}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(arr, low, high)
{
    // select rightmost element as pivot
    int pivot = arr[high]

}


void QuickSort(arr,n)
{

}