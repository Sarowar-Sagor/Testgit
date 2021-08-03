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
#define pi              acos(-1)//inbuilt M_PI
#define ll              long long
#define nl              cout<<"\n"
#define pb              push_back
#define vsort(v)        sort(v.begin(),v.end())
#define asort(n)        sort(ar,ar+n)
#define yes             cout<<"YES\n"
#define no              cout<<"NO\n"
#define for1(i,n)       for(i=1;i<=n;i++)
#define for0(i,n)       for(i=0;i<n;i++)
#define mod             1000000007
#define watch(x)        cout << (#x) << " is " << (x) <<"\n";
#define LIMIT           1000000 /**upto 10^8*/

ll dp[2002][2002];
//dp[item][knapsack]

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll rem,i,root,x,b,knapsack,y,l,c,u,even,odd,maxn=-1,mid,s,d,a,low,high,k,q,sum=0,cnt=0,n,p,m,r,ans=0,j=-1,t,minn,len;
    cin>>knapsack>>n;
    ll weight[n+5],profit[n+5];
    for(i=1;i<=n;i++) cin>>weight[i]>>profit[i];
    for(i=1;i<=n;i++){
        for(j=1;j<=knapsack;j++){
            if(weight[i]>j) dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j],profit[i]+dp[i-1][j-weight[i]]);
        }
    }
    cout<<dp[n][knapsack];
    nl;


    return 0;
}
