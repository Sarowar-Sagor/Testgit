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


int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll t,n,m,x,a,b,c,j,q,k=1,len,i,d,l,sum=0,cnt=0,digit;
    cin>>n;
    ll ar[n+5];
    for0(i,n){
        cin>>ar[i];
    }
    k=1;
    for(i=0,j=n-1;;){
        if(ar[i]<ar[j]){
            sum+=(k*ar[j]);
            cnt++;
            j--;
        }
        else{
            sum+=(k*ar[i]);
            cnt++;
            i++;
        }
        if(cnt==n) break;
        k++;
    }

    cout<<sum<<endl;

    return 0;
}
