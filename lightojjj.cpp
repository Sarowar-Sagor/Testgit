#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    long long f[10001],t,i,n,j;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>f[0]>>f[1]>>f[2]>>f[3]>>f[4]>>f[5]>>n;
        for(j=6;j<=n;j++)
        {
            f[j]=(f[j-1]+f[j-2]+f[j-3]+f[j-4]+f[j-5]+f[j-6])%10000007;
        }
        cout<<"Case "<<i<<": "<<f[n]%10000007<<endl;
    }
    return 0;
}

