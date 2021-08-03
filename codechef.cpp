#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,l,n,m,t;
    string st;
    cin>>t;
    while(t--)
    {
        int sum=0,sum1=0,gr=0,rg=0;
        string str="";
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>st;
            str=str+st;
        }
        l=str.length();
        if(l%2==0)
        {
            for(i=0,j=1;j<=l-1;i+=2,j+=2)
            {
                if(str[i]!='R')
                {
                    gr++;
                }
                if(str[j]!='G')
                {
                    rg++;
                }
                cout<<gr<<" "<<rg<<endl;

            }
            sum=(gr*3)+(rg*5);
            gr=0,rg=0;
            for(i=0,j=1;j<=l-1;i+=2,j+=2)
            {
                if(str[i]!='G')
                {
                   rg++;
                }
                if(str[j]!='R')
                {
                    gr++;
                }
                cout<<gr<<" "<<rg<<endl;
            }
            sum1=(rg*5)+(gr*3);
            if(sum<sum1)
            {
                cout<<sum<<endl;
            }
            else
            {
                cout<<sum1<<endl;
            }
        }
        else
        {
            for(i=0,j=1;i<=l-1;i+=2,j+=2)
            {
                if(str[i]!='R')
                {
                    gr++;
                }
                if(str[j]!='G')
                {
                    rg++;
                }
            }
            sum=(rg*5)+(gr*3);
            rg=0,gr=0;
            for(i=0,j=1;i<=l-1;i+=2,j+=2)
            {
                if(str[i]!='G')
                {
                    rg++;
                }
                if(str[j]!='R')
                {
                    gr++;
                }
            }
            sum1=(gr*3)+(rg*5);
            if(sum<sum1)
            {
                cout<<sum<<endl;
            }
            else
            {
                cout<<sum1<<endl;
            }

        }
    }

    return 0;
}
     
