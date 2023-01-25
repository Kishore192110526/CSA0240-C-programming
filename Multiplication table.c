#include<stdio.h>
int main()
{
	int i,n,m;
	printf("enter the table: ");
	scanf("%d",&m);
	printf("enter no of times:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d*%d=%d\n",i,m,i*m);
	}
	return 0;
}
