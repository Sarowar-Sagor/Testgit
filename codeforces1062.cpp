#include<bits/stdc+.h>
using namespace std;
int main()
{
	int ar[200],i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		if(ar[i]+1==ar[i+1] && ar[0]==1) 
		{
			count++;
		}
		else
		{
			break;
		}
	}
	for(j=i;j<n;j++)
	{
		if(ar[j]+1==ar[j+1])
		{
			countt++;
		}
		else
		{
			sum+=(countt-1);
			countt=1;
		}
	}
}
