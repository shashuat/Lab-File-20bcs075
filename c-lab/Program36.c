// Program 36: Program to insert an element in sorted array at its right place

#include <stdio.h> 

int main() 
{ 
    int i,n,j,num,arr[n]; 
    
    printf("\n Enter the number of elements in the array:");  
    scanf("%d",&n); 
    
    printf("\n Enter the array elements:"); 
    
    for(i=0;i<n;i++) 
    { 
    scanf("%d",&arr[i]); 
    } 

    printf("\n Enter the number to be inserted: ") ; 
    scanf ("%d",&num); 

    for(i=0;i<n;i++) 
    { 
        if(arr[i] > num) 
        { 
            for(j =n-1;j>=i;j--) 
            { 
            arr[j+1] = arr[j]; 
            arr[i] = num; 
            break; 
            } 
            n++; 
        } 
    } 

    printf("\n The array after insertion of is: ",  num); 
    for(i=0;i<n+1;i++) 
    { 
        printf("\t%d", arr[i]); 
    } 

    return 0; 
}