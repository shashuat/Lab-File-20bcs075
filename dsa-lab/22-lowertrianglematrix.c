// Lab 2 Program 2 : Write a C Program to find whether a Matrix is Lower Triangular Matrix

#include<stdio.h>

int main ()
{
    int matrix[10][10];
    int i, j, m, n;
    int sparse_counter = 0;
 
    printf("Enter the order of the matrix \n");
    scanf("%d %d", &m, &n);
    
    printf("Enter the elements of the matrix \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &matrix[i][j]);
            
            if (i < j && matrix[i][j] != 0)
                printf("The given matrix is not a Lower Triangualr matrix Matrix \n");
            
            else
                printf("The given matrix is a Lower Triangualr matrix Matrix \n"); 
        }
    }
    return 0;
}
