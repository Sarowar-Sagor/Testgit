#include<stdio.h>
int main()
{
	int ar[10000],b[10000],c[100000],t;
	int i=0,j=0,k=0,d,e,l,m,count;
	scanf("%d%d",&d,&e);
	for(l=0;l<d;l++)
	{
		scanf("%d",&ar[l]);
	}
	for(m=0;m<e;m++)
		scanf("%d",&b[m]);
	while(1)
	{
		if(ar[i]<b[j])
		{
			c[k]=ar[i];
			k++;
			i++;
			count=1;
			if(i==d)
				break;
		}
		else
		{		
			c[k]=b[j];
			k++;
			j++;
			count=2;
			if(j==e)
				break;	
		}
				
	}
	if(count==1)
	{
		for(m=j;m<e;m++)
		{
			c[k]=b[m];
			k++;
		}
	}
	else
	{
		for(m=i;m<d;m++)
		{
			c[k]=ar[m];
			k++;
		}
	}
	printf("finally sorted array\n");
	for(i=0;i<d+e;i++)
	{
		if(c[i-1]==c[i] && i>0)
			continue;
		printf("%d\n",c[i]);
	}
	
}
