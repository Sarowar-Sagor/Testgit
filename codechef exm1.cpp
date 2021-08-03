/**Author:Sagor
Date:05/07/2019*/

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
int ar[109],i,n;

int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    int i,j,t,cnt;
    string st,str;
    cin>>t;
    while(t--)
    {
        cin>>n>>st>>str;
        cnt=0;
        for(i=0;i<n;i++)
        {
            if(st[i]==str[i])
            {
                cnt++;
            }
            else if(str[i]=='N')
            {
                continue;
            }
            else
            {
                i++;
            }
        }
        cout<<cnt<<"\n";
    }



    return 0;
}
