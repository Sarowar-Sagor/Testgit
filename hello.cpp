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
    int n,m,i,j,a,t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<int>v1,v2;
        int pos[109]={0};
        for1(i,n){
            cin>>a;
            v1.pb(a);
            v2.pb(a);
        }
        for0(i,m){
            cin>>a;
            pos[a]++;
        }
        vsort(v1);
        int flag=0;
        for1(i,n){
            if(v1[i]!=v2[i]){
                a=v1[i];
                for1(j,n){
                    if(a==v2[j]){

                        if(pos[j]>0 || pos[j-1]>0){
                            continue;
                        }
                        else{
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag) break;
            }
        }
        if(flag) cout<<"NO\n";
        else cout<<"YES\n";
    }


    return 0;
}
