// Lab 2 Program 1 : Write a C program to check whether a matrix is sparse Matrix. Convert the Sparse matrix into its standard form.

#include <stdio.h>

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
            if (matrix[i][j] == 0)
            {
                ++sparse_counter;
            }
        }
    }

    // A Sparse matrix has more zero elements than nonzero elements i.e more zeros than (m*n)/2

    if (sparse_counter > ((m * n) / 2))
        printf("The given matrix is Sparse Matrix !!! \n");
    
    else
        printf("The given matrix is not a Sparse Matrix \n");
    
    printf("There are %d number of Zeros. \n", sparse_counter);

    printf("The matrix coverted into starndard for is : \n");


    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            if (matrix[i][j] == 0)
            {
                printf("1 \t");
            }
            else
                printf("%d \t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}