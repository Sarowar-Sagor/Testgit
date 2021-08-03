//Author:Sagor

#include<iostream>
#include<cstring>

using namespace std;

#define pi acos(-1)
#define ll long long
ll ar[109],br[109],cnt[100009];
int main()
{
    ll n,m,i;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>ar[i]>>br[i];
        cnt[ar[i]]++;
    }
    if(cnt[m]!=0)
    {
        for(i=1;i<=n;i++)
        {
            if(ar[i]==m)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    else
    {
        ll minn=100000000,sum,index;
        for(i=1;i<=n;i++)
        {
            sum=ar[i];
            if(ar[i]<m)
            {
               while(sum<m)
               {
                   sum+=br[i];
               }
               if(sum-m<minn)
               {
                   minn=sum-m;
                   index=i;
               }
            }
            else
            {
                if(sum-m<minn)
                {
                    minn=sum-m;
                    index=i;
                }
            }
        }
        cout<<index<<endl;
    }



    return 0;
}
