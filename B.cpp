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
#define yes             cout<<"Yes\n"
#define no              cout<<"No\n"
#define for1(i,n)       for(i=1;i<=n;i++)
#define for0(i,n)       for(i=0;i<n;i++)
#define mod             1000000007
#define watch(x)        cout << (#x) << " is " << (x) <<"\n";
#define LIMIT           1000000 /**upto 10^8*/


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll i,j,sum=0,k,x,r,t,col,b,c,d,a,index,y,cnt=0,len,ans,maxn,n,minn,m;
    cin>>t;
    while(t--){
        cin>>n;
        string enemy,gergor;
        cin>>enemy>>gergor;
        for(i=0,cnt=0;i<n;i++){
            if(gergor[i]=='1'){
                if(enemy[i]=='0'){
                    cnt++;
                }
                else if(i-1>=0 and enemy[i-1]=='1') cnt++;
                else if(i+1<n and enemy[i+1]=='1'){
                    cnt++;
                    enemy[i+1]='2';
                }
            }
        }
        cout<<cnt;
        nl;
    }





    return 0;
}
