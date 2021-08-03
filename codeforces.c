#include <stdio.h>
#include<string.h>
int main()
{
	char st[30];
	long long a,j=1,i,sum=0,k=1,sum2=0,b,c,total=0,r,d;
	scanf("%s",st);
	a=strlen(st);
	for(i=1;i<=a-1;i++)
	{
		sum+=(9*j);
		j=j*10;
	}
	b=((st[0]-49)*j)+sum;
	for(i=a-1;i>=0;i--)
	{
		sum2+=(st[i]-48)*k;
		k=k*10;
	}
	total=((a-1)*9)+st[0]-49;
	d=sum2-b;
	while(d!=0)
	{
		r=d%10;
		c=d/10;
		d=c;
		total+=r;
	}
	printf("%lld\n",total);
	
}
