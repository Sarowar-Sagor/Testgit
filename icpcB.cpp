
#include<bits/stdc++.h>
#include<numeric>

using namespace std;
#define ll              long long
#define watch(x)        cout << (#x) << " is " << (x) <<"\n";


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    ll rem,i,temp,root,r,ans,a,b,m,cnt,l,maxn,sum=0,n,t,v,k,j;
    cin>>t;
    for(l=1;l<=t;l++){
        cin>>n;
        ll ar[n+5];
        sum=0;
        vector<ll>v;
        cnt=0;
        for(i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]>0) {
                v.push_back(i);
                sum+=ar[i];
            }
            else if(ar[i]<0) cnt++;
        }
        cout<<"Case "<<l<<": ";
        if(cnt==n){
            maxn=-10000000;
            for(i=0;i<n;i++){
                maxn=max(ar[i],maxn);
            }
            cout<<maxn<<" 0\n";
        }
        else{
            a=v.size();
            cnt=0;
            for(i=0;i<a-1;i++){
                if(v[i]+1==v[i+1]) continue;
                else cnt++;
            }
            cout<<sum<<" "<<cnt<<"\n";
        }
    }



    return 0;
}

