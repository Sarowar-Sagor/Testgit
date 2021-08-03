#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,count,i;
	long long c,d;
	scanf("%d",&a);
	while(a--)
	{
		count=0;
		scanf("%lld",&c);
		if(c==4)
		{
			cout<<"YES\n";
		}
		else if(c%2==0 || c==1)
		{
			cout<<"NO\n";
		}
		else
		{
			d=sqrt(c);
			if(d*d==c)
			{
				for(i=2;i*i<=d;i++)
				{
					if(d%i==0)
					{
						count=1;
						break;
					}
				}
				if(count==0)
				{
					cout<<"YES\n";
				}
				else
				{
					cout<<"NO\n";
				}
			}
			else
			{
				cout<<"NO\n";
			}
			
			
		
		}
		}

}
