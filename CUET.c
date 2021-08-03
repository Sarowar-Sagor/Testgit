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
#define yes             cout<<"YES\n"
#define no              cout<<"NO\n"
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
    ll t,i,j,cnt,d1,c,x,y1,y2,one=0,b,odd,even,sum=0,large,ans,small,index,low,len,q,n,m,l,r,a,k;
    cin>>t;
    while(t--){
        cin>>n;
    if(n%2==0) no;
    else if(n==1) cout<<"YES\n1\n";
    else{
        cout<<"YES\n1 2\n1 3\n";
        for(i=3;;i++){
            a=2*i;
            if(a>n) break;
            cout<<i<<" "<<a-2;
            nl;
            cout<<i<<" "<<a-1;
            nl;

        }
        nl;
    }
    }


    return 0;
}
