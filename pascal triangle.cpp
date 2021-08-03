#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,even[100],odd[100],i,j,l;
	cin>>t;
	while(t--)
    {
    	even[0]=1;
		even[1]=1;
		odd[0]=1;
        cin>>n;
        for(i=1;i<=n+1;i++)
        {
        	for(l=n+1;l>=i;l--)
        	{
        		cout<<" ";
			}
            cout<<"1";
            if(i==1)
            {
                cout<<"\n";
            }
            for(j=1;j<=i-2;j++)
            {
                if(i%2==1)
                {
                    odd[j]=even[j-1]+even[j];
                    cout<<" "<<odd[j];
                    odd[j+1]=1;
                }
                else
                {
                    even[j]=odd[j-1]+odd[j];
                    cout<<" "<<even[j];
                    even[j+1]=1;
                }
            }
            if(i!=1)
            {
                cout<<" 1\n";
            }
        }
    }



	return 0;
}
