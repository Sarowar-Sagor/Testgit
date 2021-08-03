/**Author:Sagor
//Date:13/04/2019*/
#include<bits/stdc++.h>

using namespace std;

#define pi acos(-1)
#define ll long long
ll trie[2500009][26];
ll em[2500009];
char st[50009][60],str[60];
int main()
{
    /* ios_base::sync_with_stdio(false);
     cin.tie(NULL);*/
    ll t,i,j,len,nxt,now,x,y,n,k,flag,pre;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        for(j=0; j<2500007; j++)
        {
            em[j]=0;
            for(k=0; k<25; k++)
            {
                trie[j][k]=0;
            }
        }
        nxt=0;
        cin>>n;
        for(j=0; j<n; j++)
        {
            cin>>st[j];
            now=0;
            strcpy(str,st[j]);
            len=strlen(str);
            for(k=0; k<len; k++)
            {
                x=str[k]-'A';
                y=trie[now][x];
                if(y==0)
                {
                    nxt++;
                    trie[now][x]=nxt;
                    //pre=now;
                    now=nxt;
                    //depth[now]=depth[pre]+1;

                }
                else
                {
                    now=y;
                }
                em[now]++;

            }
        }
        ll minn,sum;
        ll maxn=0;
       /* for(j=1;j<=nxt;j++)
        {
            sum=(depth[j]*em[j]);
            if(maxn<sum)
            {
                maxn=sum;
            }
        }*/
        for(j=0;j<n;j++)
        {
            now=0;
            ll cnt=0;
            strcpy(str,st[j]);
            len=strlen(str);
            for(k=0; k<len; k++)
            {
                x=str[k]-'A';
                y=trie[now][x];
                if(em[y]>1)
                {
                    cnt++;
                    sum=em[y]*cnt;
                    if(maxn<sum)
                    {
                        maxn=sum;
                    }
                }
                else
                {
                    break;
                }
                now=y;

            }
            if(maxn<len)
            {
                maxn=len;
            }
        }
        printf("Case %lld: %lld\n",i,maxn);

    }



    return 0;
}
