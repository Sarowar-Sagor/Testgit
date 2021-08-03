/**Author:Sagor
//Date:09/04/2019*/
#include<bits/stdc++.h>

using namespace std;

#define pi acos(-1)
#define ll long long
ll trie[300009][26];
ll em[300009],ar[30];
string st;
int main()
{
    ll t,i,j,len,nxt,now,x,y,n,k,flag,pre;
    nxt=0;
    cin>>n;
    map<int,char>mp;
    for(j=0; j<n; j++)
    {
        cin>>st;
        now=0;
        char ch='A';
        len=st.length();
        for(k=0; k<len; k++)
        {
            x=st[k]-'a';
            if(ch!=st[k])
            {
                ar[x]++;
                ch=st[k];
            }
            y=trie[now][x];
            if(y==0)
            {
                trie[now][x]=++nxt;
               // pre=now;
                now=nxt;
                mp[nxt]=st[k];
                //depth[now]=depth[pre]+1;

            }
            else
            {
                now=y;
            }
        }
        em[now]++;
    }
    cin>>t;
    while(t--)
    {
        cin>>st;
        len=st.length();
        ll sum=0;
        int flag=0,flag2=0;
        if(len==1)
        {
            x=st[0]-'a';
            printf("%lld\n",ar[x]);
        }
        else
        {
            ll flag=0,cnt=0;
            for(k=1; k<=nxt; k++)
            {
               if(mp[k]==st[0])
               {
                   k++;
                   for(i=1;(i<len && em[k]==0);i++)
                   {
                       if(mp[k]!=st[i])
                       {
                           flag=1;
                           break;
                       }
                       else
                       {
                          k++;
                       }

                   }
                   if(em[k]==0)
                   {
                       if(mp[k]==st[i])
                       {
                           cnt++;
                       }
                   }
                   else if(i==len)
                   {
                       cnt++;
                   }
                   while(em[k]==0)
                   {
                       k++;
                   }

               }
            }
            printf("%lld\n",cnt);
        }
    }





    return 0;
}
