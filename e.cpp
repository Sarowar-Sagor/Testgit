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
#define watch(x)        cout << (#x) << " is " << (x) <<"\n";


int main()
{
   /** ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll t,n,m,x,a,b,c,q,k,len,j,i,d,l,sum=0,maxn;
    cin>>t;
    while(t--){
        cin>>n;
        int flag=0;
        vector<string>ar;
        string st;
        for0(i,n){
            cin>>st;
            ar.push_back(st);
        }
        for(i=0;i<n-1;i++){
            for(j=0;j<n-1;j++){
                if(ar[i][j]=='1' && ar[i][j+1]=='0'){
                        if(ar[i+1][j]=='0'){
                            flag=1;
                            break;
                        }
                }
            }
            if(flag) break;
        }
        if(flag) cout<<"NO\n";
        else cout<<"YES\n";
    }


    return 0;
}
