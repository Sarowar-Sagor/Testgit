#include<bits/stdc++.h>

using namespace std;

int main()
{
	int ar[105][105],i,j,a,b;
	cin>>a>>b;
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>ar[i][j];
		}
	}
	int c=0;
	for(i=c;i<b;)
	{
		for(j=0;j<a;j++)
		{
			cout<<ar[j][i]<<" ";
			if(j==a-1)
			{
				i++;
				for(j=a-1;j>=0;j--)
				{
					cout<<ar[j][i]<<" ";
				}
				c=i+1;
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
