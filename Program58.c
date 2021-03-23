// Program 58: Program to find the length of each string in a 2-dimensional array

#include <stdio.h>
#include <strings.h>

int main()
{
    int i,x,y,a,b,ans; 

    printf("Enter the number of columns");
    scanf("%d", &x);
    
    printf("Enter the number of rows");
    scanf("%d", &y);

    // Initialise 2d Array
    int arr[x][y];

        for (a=0; a<x; a++)
        {
            for (b=0; b<y; b++)
            {
            scanf("%d",& arr[a][b]);
            }
        }
    
    for (int i = 0; i < a; ++i)
    {
        ans = strlen(*(arr+i));
        printff("%d", &ans);
    }    

    return 0;     
}