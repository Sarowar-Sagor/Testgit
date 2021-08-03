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

ll tree[100000],ar[10000];
void initilize(ll node,ll start,ll endd)
{
    if(start==endd){
        tree[node]=ar[start];
        return ;
    }
    ll mid,left,right;
    left=node*2;
    right=node*2+1;
    mid=(start+endd)/2;
    initilize(left,start,mid);
    initilize(right,mid+1,endd);
    tree[node]=tree[left]+tree[right];


}

void update()
{

}

ll query()
{

}

int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll rem,i,t,a,z,x,k,r,up,m,down,y,q,len,maxn=0,j,b,c,sum=0,n;
    cin>>n;
    for(i=1;i<=n;i++) cin>>ar[i];
    initilize(1,1,n);
    for(i=1;i<=(3*n);i++) cout<<tree[i]<<" ";



    return 0;
}
