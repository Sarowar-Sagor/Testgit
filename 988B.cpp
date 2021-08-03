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

bool cmp(string a,string b){
    return a.size()<b.size();
}

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll t,n,m,x,a=1,b,c,j,q,k=1,flag,rem,len,i,d,l,maxn=-1;
    vector<string>st;
    cin>>n;
    string str,maxst;
    for0(i,n){
        cin>>str;
        st.push_back(str);
    }
    sort(st.begin(),st.end(),cmp);
    for(i=0;i<n-1;i++){
        flag=1;
        for(j=0;j<st[i+1].size();j++){
            if(st[i][0]==st[i+1][j]){
                l=j+1;
                flag=0;
                for(k=1;k<st[i].size();k++){
                    if(st[i][k]!=st[i+1][l++]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0) break;
            }
        }
        if(flag){
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    for(int p=0;p<n;p++) cout<<st[p]<<endl;



    return 0;
}
