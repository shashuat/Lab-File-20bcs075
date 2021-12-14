// Program 41: Program to sum the two arrays into another array


#include <stdio.h>

int main()
{
    int i, n;
    int v1[n], v2[n], v3[n]; 

    printf("Enter size of the arrays : ");
    scanf("%d", &n);

    printf("Enter elements in array 1 : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &v1[i]);
    }

    printf("Enter elements in array 2 : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &v2[i]);
    }

    //initialise v3
    for(i=0; i<n; i++)
    {
        v3[i]=0;
    }

    for(int i = 0; i < n; i++){
        v3[i] = v1[i] + v2[i];
        printf("total: %d", v3[i]);

    return 0;
}
