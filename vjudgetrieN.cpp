/**Author:Sagor
//Date:11/04/2019*/
#include<bits/stdc++.h>
#include<cstring>

using namespace std;

#define pi acos(-1)
#define ll long long
int trie[6000009][26];
int total[6000009],em[6000009];
char st[100009][65],str[65];
int main()
{
    int t,i,j,len,nxt=0,now,x,y,n,k;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>st[i];
        now=0;
        strcpy(str,st[i]);
        len=strlen(str);
        for(k=0; k<len; k++)
        {
            x=str[k]-'a';
            y=trie[now][x];
            if(y==0)
            {
                trie[now][x]=++nxt;
                now=nxt;
                total[nxt]++;
            }
            else
            {
                total[y]++;
                now=y;
            }

        }
        em[now]++;
    }
    int flag=0;
    for(j=0; j<n; j++)
    {
        now=0;
        strcpy(str,st[j]);
        len=strlen(str);
        for(k=0; k<len; k++)
        {
            x=str[k]-'a';
            y=trie[now][x];
            if(total[y]>1)
            {
                now=y;
            }
            else
            {
                if(em[now]>0)
                {
                    flag=1;
                    printf("BAD SET\n");
                    cout<<str<<endl;
                    break;
                }
            }

        }
        if(flag==1)
        {
            break;
        }
        else
        {
            if(em[now]>=2)
            {
                flag=1;
                printf("BAD SET\n");
                cout<<str<<endl;
                break;
            }

        }
    }
    if(flag==0)
    {
        printf("GOOD SET\n");
    }


    return 0;
}

