// Program 8: Program to display greatest among two/three numbers

#include <stdio.h>

int largest(int arr[], int n);
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

    printf("Largest in given array is %d", largest(arr, n));
    
    return 0;
}

int largest(int arr[], int n)
{
    int i;
    
    // Initialize maximum element
    int max = arr[0];
 
    // Traverse array elements from second and
    // compare every element with current max  
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
 