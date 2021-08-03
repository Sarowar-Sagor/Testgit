/**Author:Sagor*/

#include<bits/stdc++.h>

using namespace std;

#define pi              acos(-1)
#define ll              long long
#define pb              push_back
#define vsort(v)        sort(v.begin(),v.end())
#define asort(n)        sort(ar,ar+n)
#define for1(i,n)       for(i=1;i<=n;i++)
#define for0(i,n)       for(i=0;i<n;i++)
#define mod             1000000007

vector<int>v;
int ar[1000],i,n,t;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
   string s,r;
   cin>>t;
   while(t--)
   {
       int cnt1=0,cnt0=0;
       cin>>n>>s>>r;
       for(i=0;i<n;i++)
       {
           if(s[i]=='1')
           {
               cnt1++;
           }
           else
           {
               cnt0++;
           }
           if(r[i]=='1')
           {
               cnt1--;
           }
           else
           {
               cnt0--;
           }
       }
       if(cnt1==0 && cnt0==0)
       {
           cout<<"YES\n";
       }
       else
       {
           cout<<"NO\n";
       }

   }

    return 0;
}
