#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check[1000009];
ll prime[1000009];
ll sz;
//ll ara[300009];
bool cp[1000009];
vector<ll>prm;
void sv(ll n)
{
    ll i,j,k,l;
    for(i=2;i*i<=n;i++)
    {
        if(check[i]==true)
            continue;
       for(j=i*i;j<=n;j=j+i)
       {
           check[j]=true;
       }
    }
    for(i=2,j=-1;i<=n;i++)
    {
        if(check[i]==false)
        {
          //  cout<<i<<'\n';
            j++;
            prime[j]=i;
        }
    }
    sz=j;
}
int32_t main()
{

   ll z=1000009,i,j,l,p,q,m,n,t,cs=0;
   sv(z);
   cin>>t;
  // cout<<sz<<'\n';
   while(t--)
   {
      cin>>p>>q>>m;
      cs++;

      memset(cp,false,sizeof(cp));
      prm.clear();
       printf("Case %lld: ",cs);
       if(p==q)
      {
          printf("%lld\n",m-m);
          continue;
      }

       ll e=abs(q-p);
      ll f=p/e;
      if(p%e)
        f++;
      ll a=e*f;
      ll b=q+a-p;
      ll c=a,d=b;
    //  cout<<a<<" "<<b<<'\n';
     // ll c, d;
    //  prm.clear();
      if(__gcd(a,b)==1)
      {
          printf("%lld\n",m);
          continue;
      }


      memset(cp,false,sizeof(cp));
      for(i=0;i<sz;i++)
      {
          if(a%prime[i]==0)
          {
              cp[prime[i]]=true;
              while(a%prime[i]==0)
                a=a/prime[i];
          }
      }
      for(i=0;i<sz;i++)
      {
          if(b%prime[i]==0)
          {
              if(cp[prime[i]]==true)
                prm.push_back(prime[i]);
              while(b%prime[i]==0)
                b=b/prime[i];
          }
      }
      if(a==b&&a>1)
        prm.push_back(a);
        ll x=m;
      ll siz=prm.size();
      ll sum=0;
      x=m;
      m=max(m,c);
    //  cout<<m<<'\n';
      for(i=0;i<siz;i++)
      {
          if(m<=0)
            break;
     //    cout<<prm[i]<<'\n';
         sum=sum+m/prm[i];
         m=m-m/prm[i];
      }
      printf("%lld\n",x-sum);


   }


}
