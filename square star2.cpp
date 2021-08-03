#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>a;
        for(i=1;i<=a;i++)
        {
            if(i==1 || i==a)
            {
                for(j=1;j<=a;j++)
                {                    
                    cout<<"*";                       
                }
                 cout<<endl;
            }
            else
            {
                for(j=1;j<=a;j++)
                {
                    
                    if (j==1 || j==a) {
                        cout<<"*";
                    }
                    else {
                        cout<<" ";
                    }
                    
                }
                cout<<endl;
            }
            
        }
        cout<<endl;
    }
    return 0;           
}

