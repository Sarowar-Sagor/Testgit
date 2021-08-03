#include<bits/stdc++.h>
using namespace std;
int main()
{
	string st,str;
	int i,t;
	cin>>t;
	while(t--)
	{
		int index,k,j,count=0;
		cin>>st>>str;
		for(i=0;st[i]!='\0';i++)
		{
			index=0;
			if(st[i]==str[0])
			{
				for(k=1,j=i+1;str[k]!='\0';k++,j++)
				{
					if(st[j]==str[k])
					{
						continue;
					}
					else
					{
						index=1;
						break;
					}
				}
				if(index==0)
				{
					count++;
				}
				
			}
		}
		cout<<count<<endl;
	}
	
	
	return 0;
}
