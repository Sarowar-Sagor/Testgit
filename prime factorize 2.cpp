/**Author:Sagor*/
/**updated prime factorize is in divisor count by prime factorize program*/

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
bool prime[1000003];
ll onlyprime[100000];

/**complexity O(n^(1/3))*/

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
                 for (int i=p*p; i<=LIMIT; i += (2*p))
				prime[i] = true;
		    }

		}
	}
}

int ar[10009];

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll divisor,i,a,root,n,ans=1,j;
    SieveOfEratosthenes();
    cout<<"Enter the number \n";
    cin>>n;
    root=sqrt(n);
    for(i=0;onlyprime[i]<=root && onlyprime[i]>0;i++){
            if(n%onlyprime[i]==0){
                divisor=0;
                while(n%onlyprime[i]==0){
                    n/=(onlyprime[i]);
                    divisor++;
                }
                root=sqrt(n);
                ans*=(divisor+1);
            }
        }
    if(n!=1) ans*=2;
    cout<<"Divisor of the number is "<<ans;
    cout<<endl;


    return 0;
}
