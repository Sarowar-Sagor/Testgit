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

bool isprime(int n)
{
    if(n%2==0 && n!=2)
    {
        return 0;
    }
    else
    {
        int root=sqrt(n);
        for(int i=3; i<=root; i+=2)
        {
            if(n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }

}
void isPalindrome(string str)
{
    int l = 0;
    int h = str.size() - 1;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("%s is Not Palindrome", str);
            return;
        }
    }
    printf("%s is palindrome\n", str);
}

//vector<int>v;

//map<ll,ll>mp;

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll j,i,t,n,k;
    cin>>t;
    while(t--){
        cin>>n;
        ll ar[n+2];
        for0(i,n){
            cin>>ar[i];
        }
        ll maxn=0;
        for(i=0;i<n-1;i++){
            if(ar[i]>ar[i+1]){
                ll cnt=1,cnt2=1,sum=1;
                for(; ;){
                    if(ar[i]<=(ar[i+1]+sum)){
                        ar[i+1]+=sum;
                        break;
                    }
                    else{
                        cnt2++;
                        cnt=cnt*2;
                        sum+=cnt;
                    }
                }
                if(maxn<cnt2){
                    maxn=cnt2;
                }
            }
        }
        cout<<maxn<<endl;
    }

    return 0;
}
