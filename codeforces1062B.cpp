#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long a,b,n;
    cin>>n;
    int i,flag=0;
    if(n==1)
    {
        cout<<n<<" "<<"0\n";
    }
    else if(n>1)
    {
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<n<<" "<<"0\n";
        }
        else
        {
            a=sqrt(n);
            if(a*a==n)
            {
                
            }
        }

    }

    return 0;
}
