// Program 7: Program to display that a person is eligible for voting

#include<stdio.h>

int main()
{
	int a;
	
	//Input Age
	printf("Enter the age of the person: ");
	scanf("%d",&a);

	//Check Voting Eligibility
	if (a>=18)
	{
		printf("Eigible for voting\n");
	}
	else
	{
		printf("Not eligible for voting\n");
	}	

	return 0;
}