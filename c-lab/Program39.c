// Program 39: Program to calculate average marks scored by the class

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    int Arr[n];

    printf("Enter the number of Students in class : ");
    scanf("%d", &n);

    printf("Enter marks of each student");

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &Arr[i]);
        sum += Arr[i];
    }

    printf("\nThe sum of the array is : %d", sum);
    printf("\nThe average of the array is : %0.2f", (float)sum / n);

    return 0;
}