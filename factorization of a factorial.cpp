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


int main()
{
    /**ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    /**To factorize a factorial we just need to count total number of prime means total number of 2,3,5,7.......<=n where n is the factorial*/
    ll n,a,temp,i,j,t,len,sum;
    bool prime[105];
	memset(prime, true, sizeof(prime));
	for(int i=4;i<=100;i+=2) prime[i]=false;
	for (int p=3; p*p<=100; p+=2)
	{
		if (prime[p] == true)
		{
			for (int i=p*p; i<=100; i += (2*p))
				prime[i] = false;
		}
	}
	cin>>t;
	for(i=1;i<=t;i++){
        sum=0;
        cin>>n;
        vector<pair<ll,ll> >v;
        a=n;
        while(a){
            a/=2;
            sum+=a;
        }
        v.push_back(make_pair(2,sum));
        for(j=3;j<=n;j+=2){
            if(prime[j]){
                sum=0;
                temp=n;
                while(temp){
                    temp/=j;
                    sum+=temp;
                }
                v.push_back(make_pair(j,sum));
            }

        }
        printf("Case %lld: %lld = ",i,n);
        len=v.size();
        for(j=0;j<len;j++){
            if(j<len-1) printf("%lld (%lld) * ",v[j].first,v[j].second);
            else printf("%lld (%lld)",v[j].first,v[j].second);
        }
        cout<<"\n";
	}
    return 0;
}
