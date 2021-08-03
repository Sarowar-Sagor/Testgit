/**<<<<<<In the name of ALLAH>>>>>>>

<<<<It's never too late for a new beginning in your life>>>>
Today is hard
    tomorrow will worse
        but the day after tomorrow will be the sunshine..
Never give up**/

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
#define nl              cout<<"\n"
#define pb              push_back
#define vsort(v)        sort(v.begin(),v.end())
#define asort(n)        sort(ar,ar+n)
#define yes             cout<<"Yes\n"
#define no              cout<<"No\n"
#define for1(i,n)       for(i=1;i<=n;i++)
#define for0(i,n)       for(i=0;i<n;i++)
#define mod             1000000007
#define watch(x)        cout << (#x) << " is " << (x) <<"\n";
#define LIMIT           100000 /**upto 10^8*/
bool prime[100003];
int onlyprime[10000];

void SieveOfEratosthenes()
{
    onlyprime[0]=2;
    int k=1;
    prime[0]=prime[1]=true;
	for(int i=4;i<=LIMIT;i+=2) prime[i]=true;

	for (ll p=3; p<=LIMIT; p+=2)
	{
		if (prime[p] == false)
		{
		    onlyprime[k++]=p;
		    if(p*p<=LIMIT){
                 for (int i=p*p; i<=LIMIT; i += (p+p))
				prime[i] = true;
		    }

		}
	}
}



int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    SieveOfEratosthenes();
    ll i,len,t,a,b,j,d,n,c,one,root,zero,product,cnt=0,ans=1,z,m,x=1,k=0,half,l,r,y,minn,sum=0,index,odd;
    cin>>n;
    root=sqrt(n);
    for(i=0;onlyprime[i]<=root && onlyprime[i]>0;i++){
        if(n%onlyprime[i]==0){
            product=onlyprime[i];
                while(n%onlyprime[i]==0){
                    n/=(onlyprime[i]);
                    product*=onlyprime[i];
                }
                root=sqrt(n);
                ans*=((product-1)/(onlyprime[i]-1));
        }
    }
    if(n!=1){
        ans*=(((n*n)-1)/(n-1));
    }
    watch(ans);

    return 0;
}
