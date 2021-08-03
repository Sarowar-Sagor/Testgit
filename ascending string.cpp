//Ascending string.cpp
//Sarowar Alam Sagor
//sarowarsagor760@gmail.com
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string st[15],temp;
    int i;
    for(i=0;i<8;i++)
    {
    	cin>>st[i];
	}
	for(i=0;i<7;i++)
	{
		for(int j=i+1;j<8;j++)
		{
			if(st[i]>st[j])
			{
				temp=st[i];
				st[i]=st[j];
				st[j]=temp;	
			}
				
		}
	}
	for(i=0;i<8;i++)
	{
		cout<<st[i]<<endl;
	}
    
    
    return 0;
}

