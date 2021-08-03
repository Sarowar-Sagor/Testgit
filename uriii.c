#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k=11,l=1;
	char ch[5];
	double x,sum=0,M[12][12];
	scanf("%s",ch);
	for(i=0;i<12;i++)
		for(j=0;j<12;j++)
		scanf("%lf",&M[i][j]);
	
		for(i=11;i>=7;i--)
		{
			for(j=l;j<k;j++)
			sum+=M[j][i];
			l++;
			k--;
		
		}
		
	x=(sum*1.0)/30.0;
	if(ch[0]=='S')
	printf("%0.1lf\n",sum);
	else
	printf("%0.1lf\n",x);
	
	
	
}
