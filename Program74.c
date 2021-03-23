

#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int i, n;  
    int arr[n]; 

    printf("Enter size of the array : ");
    scanf("%d", &n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Initialize max with first element of array.    
    int max = arr[0];    
        
    //Loop through the array    
    for (int i = 0; i < n; i++) {     
        //Compare elements of array with max    
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("Largest element present in given array: %d\n", max);    
    
    return 0;    
}    