#include<stdio.h>
int main()
{
	long long a[10000],t,x,y,i,j,b,c,d,k,l;
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld%lld",&x,&y);
		for(j=0;j<x;j++)
		scanf("%lld",&a[j]);
		for(j=0;j<y;j++)
		{
			scanf("%lld%lld%lld",&b,&c,&d);
			for(k=0;k<x;k++)
			{
					if(b==1 && a[k]<=c)
			a[k]=a[k]-d;
			if(b==2 && a[k]>=c)
			a[k]=a[k]+d;
			}
		
			
			
		}
		for(l=0;l<x;l++)
	printf("%lld ",a[l]);	
		
	}
	
}
