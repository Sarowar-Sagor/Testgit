/**Author:Sagor
//Date:05/06/2019*/
#include<bits/stdc++.h>

using namespace std;

#define pi              acos(-1)
#define ll              long long
#define scll(n)         scanf("%lld",&n)
#define sci(n)          scanf("%d",&n)
#define scd(n)          scanf("%lf",&n)
#define pf              printf
#define pb              push_back
#define vsort(v)        sort(v.begin(),v.end())
#define asort(n)        sort(ar,ar+n)
#define for1(i,n)       for(i=1;i<=n;i++)
#define for0(i,n)       for(i=0;i<n;i++)
#define mod             1000000007

vector<int>v;
int ar[10000000],i,n;
string st;

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);//don't use scanf or printf*/
    ll a,x,sum=0;
    double d;
    d=pow(2,32);
    a=d-1;
    vector<string>st;
    map<int,int>mp;
    string str;
    cin>>t;
    for0(i,t)
    {
        cin>>str;
        st.pb(str);
        if(str=="for")
        {
            cin>>n;
            mp[i]=n;
        }
    }
    for0(i,t)
    {
        if(st[i]=="for")
        {
            x=mp[i];
            for(j=i+1;st[j]!="end";j++)
            {
                if(st[j]=="for")
                {
                    x*=mp[j];
                }
                else
                {
                    sum+=x;
                    x=1;
                }
            }
            i=j+1;
        }
        else if(st[i]=="add")
        {
            sum++;
        }
    }

    return 0;
}
