#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[1009],br[109],j,i,n,max,min;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    max=ar[0];
    min=ar[0];
    for(i=1; i<n; i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
        }
        if(min>ar[i])
        {
            min=ar[i];
        }
    }
    for(i=min; i<=max; i++)
    {
        int sum=0,k;
        for(j=0; j<n; j++)
        {
            if(abs(ar[j]-i)<=1)
                continue;
            else
            {
                k=abs(ar[j]-i)-1;
                sum+=k;
            }
        }
        br[i]=sum;
    }
    int ans,index;
    ans=br[min];
    index=min;
    for(i=min+1; i<=max; i++)
    {
        if(ans>br[i])
        {
            ans=br[i];
            index=i;
        }
    }
    cout<<index<<" "<<ans<<endl;
    return 0;
}
