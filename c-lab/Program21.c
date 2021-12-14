// Program 21: Program to find sum of all number between m to n

#include<stdio.h>

int main()
{

	int start, end;
	
    scanf('%d',&start);
	scanf('%d',&end);
	
    int i, sum = 0;
	for(i = start; i <= end; i++)
	{
		sum = sum + i;
	}
	
    printf('%d',sum);

	return 0;
}