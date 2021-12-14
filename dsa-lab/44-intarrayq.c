// Lab 4 Program 4 : question statement

#include <stdio.h>
int main()
{
    int array[50],n,i;
  
    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("\nEnter elements:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&array[i]);
    }
  
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    for(int i =0;i<n;i++)
    {
        arr[i]=sum-arr[i];
    }
  
    printf("sum is : %d\n",sum);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
return 0;

}
