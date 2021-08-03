/**Author:Sagor*/

#include<bits/stdc++.h>

using namespace std;
#define pri(n)          printf("%d\n",n)
#define prll(n)         printf("%lld\n",n)
#define prd(n)          printf("%lf\n",n)
#define scll(n)         scanf("%lld",&n)
#define sci(n)          scanf("%d",&n)
#define scd(n)          scanf("%lf",&n)
#define pi              acos(-1)
#define ll              long long
#define pb              push_back
#define vsort(v)        sort(v.begin(),v.end())
#define asort(n)        sort(ar,ar+n)
#define for1(i,n)       for(i=1;i<=n;i++)
#define for0(i,n)       for(i=0;i<n;i++)
#define mod             1000000007
#define watch(x)        cout << (#x) << " is " << (x) <<"\n";
#define LIMIT           10000000 /**upto 10^8*/
unsigned long long phi[5000009];
bool mark[5000009];

void Sievephi(ll n)
{
    int i,j;
    for(i=2;i<=n;i++) phi[i]=i;
    for(i=2;i<=n;i++){
        if(mark[i]==0){
            for(j=i;j<=n;j+=i){
                mark[j]=1;
                phi[j]=((phi[j]/i)*(i-1));
            }
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll t,i,pro,sum,k,b,zero=0,a,cnt=0,q,j,root,r,n,m,index=0,maxn=-1;
    n=5000009;
    Sievephi(n);






    return 0;
}
