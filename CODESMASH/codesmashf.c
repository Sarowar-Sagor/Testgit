#include<stdio.h>
int main()
{
	int ar[105][105],i,j,a,b;
	scanf("%d%d",&a,&b);
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	int c=0;
	for(i=c;i<b;)
	{
		for(j=0;j<a;j++)
		{
			printf("%d ",ar[j][i]);
			if(j==a-1)
			{
				i++;
				if(i==b)
                    break;
				for(j=a-1;j>=0;j--)
				{
					printf("%d ",ar[j][i]);
				}
				c=i++;
				break;
			}
		}
	}



	return 0;
}
