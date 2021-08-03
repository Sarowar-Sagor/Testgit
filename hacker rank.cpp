#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,k,t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>k;
		if(n%2==0)
		{
			if(k>=0 && k<(n/2))
			{
				cout<<(2*k)+1<<endl;
			}
			else
			{
				cout<<((n-1)-k)*2<<endl;
			}
		}
		else
		{
			if(k>=0 && k<((n-1)/2))
			{
				cout<<(2*k)+1<<endl;
			}
			else
			{
				cout<<((n-1)-k)*2<<endl;
			}
		}
	}
	
}
