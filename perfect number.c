#include<stdio.h>
int main()
{
	int i,n,rem,sum=0;
	printf("enter a number to check perfect or not:");
	scanf("%d",&n);
	for(i=1;i<=(n-1);i++)
	{
		rem=n%i;
		if(rem==0)
		{
		sum=sum+i;
	    }
	}
	
	if(sum==n)
	printf("%d is a perfect number",n);
	else
	printf("%d is not a perfect number",n);
	return 0;
	
}
