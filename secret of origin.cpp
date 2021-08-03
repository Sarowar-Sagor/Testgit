/**Author:Sagor
//Date:04/04/2019*/
#include<bits/stdc++.h>

using namespace std;

#define pi acos(-1)
#define ll long long
ll num[64];

int main()
{
    ll a,i,j,bin,k,one,t,flag,b,sum;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>a;
        b=a;
        one=0,k=0,flag=0,num[64]= {0},sum=0;
        while(a!=0)
        {
            bin=a%2;
            if(bin==1)
            {
                one++;
            }
            a/=2;
            num[k++]=bin;
        }
        if(one==1)
        {
            printf("Case %lld: %lld\n",i,b*2);
        }
        else
        {
            for(j=0; j<k-1; j++)
            {
                if(num[j]==1 && num[j+1]==0)
                {
                    num[j]=0;
                    num[j+1]=1;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                --k;
                num[k]=0;
                k++;
                num[k]=1;
                for(j=0; j<=k; j++)
                {
                    cout<<"ar "<<num[j]<<endl;
                    if(num[j]==1)
                    {
                        sum+=pow(2,j);
                    }
                }
            }
            else
            {
                for(j=0; j<k; j++)
                {
                    cout<<"ar "<<num[j]<<endl;
                    if(num[j]==1)
                    {
                        sum+=pow(2,j);
                    }
                }
            }
            printf("Case %lld: %lld\n",i,sum);

        }


    }

    return 0;
}
