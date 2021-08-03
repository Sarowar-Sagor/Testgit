/**Author:Sagor*/

#include<bits/stdc++.h>

using namespace std;

#define pi              acos(-1)
#define ll              long long
#define pb              push_back
#define vsort(v)        sort(v.begin(),v.end())
#define asort(n)        sort(ar,ar+n)
#define for1(i,n)       for(i=1;i<=n;i++)
#define for0(i,n)       for(i=0;i<n;i++)
#define mod             1000000007
/**b=base,p=power,m=modulas*/

ll modular(ll b,ll p,ll m){
    ll res=1;
    b=b%m;
    while(p>0){
        if(p & 1){
            res=(res*b)%m;
        }
        p=p>>1;
        b=(b*b)%m;
    }
    return res;
}


int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll b,p,m;
    while(scanf("%lld%lld%lld",&b,&p,&m)!=EOF){
    cout<<modular(b,p,m)<<endl;
   }

    return 0;
}
