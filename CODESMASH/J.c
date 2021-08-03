#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	if(n==0)
	{
		printf("0\n");
	}
	else if(n<0)
	{
		printf("%d ",n);
		for(i=n+1;i<=0;i++)
		{
			if(i==0)
			{
				printf("0");
			}
			else 
			{
				printf("%d ",i);	
			}
		}
	}
	else
	{
		printf("0 ");
		for(i=1;i<=n;i++)
		{
			if(i==n)
			{
				printf("%d",i);
			}
			else 
			{
				printf("%d ",i);	
			}
		}
	}
	return 0;
}
