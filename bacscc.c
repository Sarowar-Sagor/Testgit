#include<stdio.h>
int main()
{
	long long int a[100000],t,x,y,i,j,b,c,d,k,l,p;
	scanf("%lld",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%lld%lld",&x,&y);
		p=x;
		for(j=1;j<=x;j++)
		scanf("%lld",&a[j]);
		for(j=1;j<=y;j++)
		{
			scanf("%lld%lld%lld",&b,&c,&d);
			for(k=1;k<=x;k++)
			{
					if(b==1 && a[k]<=c)
			a[k]=a[k]-d;
		   else	if(b==2 && a[k]>=c)
			a[k]=a[k]+d;
			}
		
			
			
		}
		
		
	}
		for(l=1;l<=x;l++)
		{
			printf("%lld",a[l]);
			if(l==p)
			break;
			else 
			printf(" ");
		}
		printf("\n");
	
}
