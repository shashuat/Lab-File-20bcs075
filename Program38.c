// Program to read temperature recorded for the month of September. Display the highest and lowest temperature recorded

#include <stdio.h>

int main()
{
    int i, n;   
    int arr[n]; 

    printf("Enter Number of days for which temperature recorded : ");
    scanf("%d", &n);

    printf("Enter Temperature data in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Highest Temperature in given array is %d", highest(arr, n));
    printf("Lowest Temperature in given array is %d", lowest(arr, n));

    return 0; 
}

int highest(int arr[], int n)
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

int lowest(int arr[], int n)
{
    int i;
    
    // Initialize minimum element
    int min = arr[0];
 
    // Traverse array elements from second and
    // compare every element with current min  
    for (i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

