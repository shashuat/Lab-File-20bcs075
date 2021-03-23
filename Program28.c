//Program 28: Program to print all leap years between year m to n

#include <stdio.h>
 
//function to check leap year
int checkLeapYear(int year)
{
    if( (year % 400==0)||(year%4==0 && year%100!=0) )
        return 1;
    else
        return 0;
}
 
int main()
{
    int i,n,m;
 
    printf("Enter the value of N: ");
    scanf("%d",&n);

    printf("Enter the value of M: ");
    scanf("%d",&m);
 
    printf("Leap years from %d to %d:\n",n,m);
    for(i=n;i<=m;i++)
    {
        if(checkLeapYear(i))
            printf("%d\t",i);
    }
     
    return 0;
}