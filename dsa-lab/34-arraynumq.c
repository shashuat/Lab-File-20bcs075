// Lab 3 Program 4 : You are given an array of numbers. Find the frequency of occurrence of numbers in that array and display

#include <stdio.h>
int main()
{
  
    int n;
    printf("enter the number of elements u wanna enter\n");
    scanf("%d",&n);
  
    int arr[n];
    int frequency[n];
    int repeated = -1;
  
    for (int i=0;i<n;i++)
    {
        printf("enter %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n\n\n");
  
    for(int i = 0; i < n; i++)
    {
        int count = 1;
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
            count++;
            frequency[j] = repeated;
            }
        }
        if(frequency[i] != repeated)
        frequency[i] = count;
    }
  
    for(int i=0;i<n;i++)
    {
    if(frequency[i]!=repeated)
    {
        printf("%d occurs %d times\n",arr[i],frequency[i]);
    }
    }
    return 0;
}
