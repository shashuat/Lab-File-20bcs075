// Program 75: Program to multiply two matrices by passing matrix to function

#include <stdio.h>
void take_data(int a[][10], int b[][10], int r1,int c1, int r2, int c2);
void multiplication(int a[][10],int b[][10],int mult[][10],int r1,int c1,int r2,int c2);
void display(int mult[][10], int r1, int c2);
int main()
{
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2, i, j, k;
    printf("Enter rows and column for first matrix: ");
    scanf("%d%d", &r1, &c1);
    printf("Enter rows and column for second matrix: ");
    scanf("%d%d",&r2, &c2);

/* If colum of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again. */
    while (c1!=r2)
    {
        printf("Error! column of first matrix not equal to row of second.\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d%d", &r1, &c1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d%d",&r2, &c2);
    }
    take_data(a,b,r1,c1,r2,c2);  /* Function to take matices data */
    multiplication(a,b,mult,r1,c1,r2,c2); /* Function to multiply two matrices. */
    display(mult,r1,c2); /* Function to display resultant matrix after multiplication. */
    return 0;
}
void take_data(int a[][10], int b[][10], int r1,int c1, int r2, int c2)
{
    int i,j;
    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<r1; ++i)
    for(j=0; j<c1; ++j)

    {
       printf("Enter elements a%d%d: ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<r2; ++i)
    for(j=0; j<c2; ++j)
    {
        printf("Enter elements b%d%d: ",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
}
void multiplication(int a[][10],int b[][10],int mult[][10],int r1,int c1,int r2,int c2)
{
    int i,j,k;
/* Initializing elements of matrix mult to 0.*/

    for(i=0; i<r1; ++i)
    for(j=0; j<c2; ++j)
     {
       mult[i][j]=0;
    }
/* Multiplying matrix a and b and storing in array mult. */
 
    for(i=0; i<r1; ++i)
    for(j=0; j<c2; ++j)
    for(k=0; k<c1; ++k)
    {
        mult[i][j]+=a[i][k]*b[k][j];
    }
}
void display(int mult[][10], int r1, int c2)
{
    int i, j;
    printf("\nOutput Matrix:\n");
    for(i=0; i<r1; ++i)
     for(j=0; j<c2; ++j)
    {
        printf("%d  ",mult[i][j]);
        if(j==c2-1)
            printf("\n\n");
    }
}