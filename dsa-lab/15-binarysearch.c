// Lab 1 Program 5 : C Program to Implement Binary search 

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {
  // Repeat until the pointers low and high meet each other
  while (low <= high) 
  {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) 
{
    int array[100],c,n,x;

    printf("Enter number of elements in the array\n");
    scanf("%d", &n);
    
    printf("Enter %d elements\n", n);
    
    for (c = 0; c < n; c++)    
        scanf("%d", &array[c]);

    printf("Enter Element you want to search\n");
    scanf("%d", &x);

    int result = binarySearch(array, x, 0, n - 1);
    
    if (result == -1)
        printf("Not found\n");

    else
        printf("Element is found at index %d\n", result);
    return 0;
}

