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
char st[109][109];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
    int m,n,i,j,row1,row2,col2,col1;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cin>>st[i][j];
        }
    }
    for(i=1;i<=n;i++)
    {
        int cnt=0;
        for(j=1;j<=m;j++)
        {
            if(st[i][j]=='*')
            {
                cnt++;
                v.pb(i);
                v.pb(j);
            }
            if(cnt==2)
            {
                break;
            }

        }
        if(cnt==2)
        {
            break;
        }
        if(cnt==1)
        {
            v.clear();
        }
    }
    row1=v[0];
    col1=v[1];
    row2=v[2];
    col2=v[3];
    for(i=1;i<=n;i++)
    {
        if(i==row1)
        {
            continue;
        }
        if(st[i][col1]=='*')
        {
            cout<<i<<" "<<col2<<"\n";
            return 0;
        }
    }
    for(i=1;i<=n;i++)
    {
         if(i==row1)
        {
            continue;
        }
        if(st[i][col2]=='*')
        {
            cout<<i<<" "<<col1<<"\n";
            return 0;
        }
    }





    return 0;
}
