/**<<<<<<In the name of ALLAH>>>>>>>

<<<<It's never too late for a new beginning in your life>>>>
Today is hard
    tomorrow will worse
        but the day after tomorrow will be the sunshine..
HARD WORK BEATS TALENT WHEN TALENT DOESN'T WORK HARD............
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
#define nl              cout<<"\n"
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


int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll rem,i,t,x,y,len,m,a,j,k,c,maxn,l,s,sum=0,n;
    cin>>t;
    while(t--){
        cin>>n>>k;
        ll ar[n+5];
        for0(i,n) cin>>ar[i];
        j=0;
        while(k>0 && j<n-1){
            if(k>=ar[j]){
                k-=ar[j];
                ar[n-1]+=ar[j];
                ar[j]=0;
            }
            else{
                ar[j]-=k;
                ar[n-1]+=k;
                k=0;
            }
            j++;

        }
        for(i=0;i<n;i++) cout<<ar[i]<<" ";
        nl;
    }

    return 0;
}
