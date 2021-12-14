// Program 56: Program to search a word in a string

#include <string.h>

int main()
{
    char s[2000],w[2000];
    int n,a[2000],i,j,k=0,l,found=0,t=0;
 
    printf("Enter  the string : ");
    gets(s);
    printf("Enter word to be searched: ");
    gets(w);
    for(i=0;s[i];i++)
    {
    	if(s[i]==' ')
    	{
    		a[k++]=i;
		}
	}
	a[k++]=i;
	j=0;
	for(i=0;i<k;i++)
	{
		n=a[i]-j;
		if(n==strlen(w))
		{
			t=0;
			for(l=0;w[l];l++)
			{
				if(s[l+j]==w[l])
				{
					t++;
				}
			}
			if(t==strlen(w))
		    {
				found++;
				printf("word '%s'  is occurred at location=%d \n",w,j);

			}
		}
	
		j=a[i]+1;
	}
	
    return 0;
}