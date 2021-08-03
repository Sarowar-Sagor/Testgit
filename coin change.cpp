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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll rem,i,root,x,b,knapsack,y,l,c,u,even,odd,maxn=-1,mid,s,d,a,low,high,k,q,sum=0,cnt=0,n,p,m,r,ans=0,j=-1,t,minn,len;
    cin>>m>>n;
    ll dp[n+2][m+2];/**row=Item,column=Coin which have to change*/
    ll coin[n+2];
    for(i=1;i<=n;i++) cin>>coin[i];
    memset(dp,0,sizeof(dp));
    for(i=0;i<=n;i++) dp[i][0]=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(coin[i]>j) dp[i][j]=dp[i-1][j];
            else dp[i][j]=dp[i-1][j]+dp[i][j-coin[i]];/**we can use coin infinite times*/
        }
    }
    cout<<dp[n][m];
    nl;


    return 0;
}
