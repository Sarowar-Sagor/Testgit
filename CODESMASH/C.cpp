#include<bits/stdc++.h>
using namespace std;
long long factorial(long long a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		return (a*(factorial(a-1)))%1000000000000037;
	}
}
int main()
{
	long long a,b,i,t;
	long long sum;
	cin>>t;
	while(t--)
	{
	    sum=0;
		cin>>a>>b;
		if(a==0)
        {
            for(i=1;i<=b;i++)
            {
                sum+=factorial(i);
            }
        }
        else
        {
            for(i=a;i<=b;i++)
            {
                sum+=factorial(i);
            }
        }
		cout<<sum<<endl;
	}





















	return 0;
}
