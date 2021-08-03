/**Author:Sagor
Date:13/07/2019*/

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
int ar[10000000],i,n;

int main()
{
   /* ios_base::sync_with_stdio(false);
    cin.tie(NULL);/**Dont't use scanf of printf*/
  int n,cntm=0,cnts=0,cntp=0,ar[10],maxn;
  string st;
  for(i=0;i<3;i++)
  {
      cin>>st;
      ar[i]=st[0]-48;
      if(st[1]=='s')
      {
          cnts++;
      }
      else if(st[1]=='m')
      {
          cntm++;
      }
      else
      {
          cntp++;
      }
  }
  maxn=max(cntm,cntp);
  maxn=max(maxn,cnts);
  if(maxn==1)
  {
      cout<<"2\n";
  }
  else if(maxn==2)
  {

  }

    return 0;
}
