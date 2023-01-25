#include<stdio.h>
int main()
{
	int p,q,r;
	printf("enter p,q and r: ");
	scanf("%d%d%d",&p,&q,&r);
	for(int i=p;i<=q;i++)
	{
	if(i==r)
	continue;
	else
	printf("%d\n",i);
}
return 0;
}
