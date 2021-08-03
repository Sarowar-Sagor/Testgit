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
#define yes             cout<<"YES\n"
#define no              cout<<"NO\n"
#define for1(i,n)       for(i=1;i<=n;i++)
#define for0(i,n)       for(i=0;i<n;i++)
#define mod             1000000007
#define watch(x)        cout << (#x) << " is " << (x) <<"\n";
#define LIMIT           100000 /**upto 10^8*/


int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll i,len,t,a,b,low,high,c,val,mid,j,d,n,one,root,zero,product,cnt=0,ans=1,z,m,x=1,k=0,half,l,r,y,maxn,index,odd;
    cin>>t;
    while(t--){
        cnt=0;
        cin>>n>>m;
        for(i=0;i<n;i++){
            cin>>a>>b>>c>>d;
            if(b==c) cnt++;
        }
        if(m&1) no;
        else{
            if(cnt==0) no;
            else yes;
        }
    }


    return 0;
}
