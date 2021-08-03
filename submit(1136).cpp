#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,t,i,c;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        if(a==b)
        {
            printf("Case %lld: 0\n",i);
        }
        else
        {
            c=((b-a)+1)*2;
            printf("Case %lld: %0.lf\n",i,ceil(c/3.00));
        }
    }
}
