#include<bits/stdc++.h>

using namespace std;

#define ll long long

main()
{
    ll n, m, k, l, i;

    cin>>n>>m>>k>>l;

    if(n>=m && n>=l+k)
    {
        if((l+k)%m!=0) i=(l+k)/m+1;
        else i=(l+k)/m;

        if(m*i<=n) cout<<i<<endl;
        else cout<<-1<<endl;
    }
    else cout<<-1<<endl;

}
