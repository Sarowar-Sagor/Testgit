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
#define yes             cout<<"Yes\n"
#define no              cout<<"No\n"
#define LIMIT           1000 /**upto 10^8*/
bool prime[1003];
int onlyprime[1000];


void SieveOfEratosthenes()
{
    prime[0]=prime[1]=true;
	for(int i=4;i<=LIMIT;i+=2) prime[i]=true;

	for (int p=3; p*p<=LIMIT; p+=2)
	{
		if (prime[p] == false)
		{
			for (int i=p*p; i<=LIMIT; i += (2*p))
				prime[i] = true;
		}
	}
	onlyprime[0]=2;
    int k=1;
    for(int i=3;i<=LIMIT;i+=2){
        if(prime[i]==false) onlyprime[k++]=i;
    }
}

ll phi(ll a)
{
    if(a==1) return 1;
    ll root,res;
    root=sqrt(a);
    res=a;
    for(int i=0;onlyprime[i]<=root && onlyprime[i]>0;i++){
        if(a%onlyprime[i]==0){
            while(a%onlyprime[i]==0){
                a/=onlyprime[i];
            }
            res-=(res/onlyprime[i]);
            root=sqrt(a);
        }
    }
    if(a!=1){
        res-=(res/a);
    }
    return res;
}

int main()
{
   /** ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll t,i,pro,j,a,b,cnt,q,l,two=0,one=0,r,n;
    SieveOfEratosthenes();
    cin>>t;
    while(t--){
        cin>>a;
        cout<<phi(a)<<"\n";
    }



    return 0;
}
