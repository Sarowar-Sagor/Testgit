#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,a,b;
	double e,d;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int ar[15],count=0,k=2;
		cin>>a;
		for(j=0;j<a;j++)
		{
			cin>>ar[j];
		}
		for(j=0;j<a;j++)
		{
			d=ar[j]-k;
			k=ar[j];
			if(d>0 && d<=5)
			{
				count++;
			}
			else if(d>5)
			{
				e=ceil(d/5);
				count+=e;
			}
		}
		cout<<"Case "<<i+1<<": ";
		cout<<count<<endl;
		
	}
	return 0;
}
