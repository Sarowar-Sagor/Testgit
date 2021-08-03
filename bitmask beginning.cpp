/**In The Name Of Allah*/

#include<bits/stdc++.h>
#include<numeric>

using namespace std;
#define pri(n)          printf("%d\n",n)
#define prll(n)         printf("%lld\n",n)
#define prd(n)          printf("%lf\n",n)
#define scll(n)         scanf("%lld",&n)
#define sci(n)          scanf("%d",&n)
#define scd(n)          scanf("%lf",&n)
#define pi              acos(-1)//inbuilt M_PI
#define ll              long long
#define pb              push_back
#define vsort(v)        sort(v.begin(),v.end())
#define asort(n)        sort(ar,ar+n)
#define yes             cout<<"Yes\n"
#define no              cout<<"No\n"
#define for1(i,n)       for(i=1;i<=n;i++)
#define for0(i,n)       for(i=0;i<n;i++)
#define mod             1000000007
#define watch(x)        cout << (#x) << " is " << (x) <<"\n";

bool check_bit(ll n,ll i)
{
    return (n&(1<<i));
}
ll set_bit(ll n,ll i)
{
    return (n|(1<<i));
}

ll flip_bit(ll n,ll i)
{
    return (n^(1<<i));
}
ll reset_bit(ll n,ll i)
{
    if(check_bit(n,i)) flip_bit(n,i);
}


int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll i,len,n,t,minn,sum=0,cnt,odd;
    cout<<reset_bit(7,1)<<endl;



    return 0;
}
