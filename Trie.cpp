#include<bits/stdc++.h>

using namespace std;
int trie[100002][26],em[100000];

int main()
{
    int i,len,n,j,x,nxt=0,now,y;
    string st,str;
    cin>>n>>str;
    for(i=0; i<n; i++)
    {
        now=0;
        cin>>st;
        len=st.length();
        for(j=0; j<len; j++)
        {
            x=st[j]-'a';
            y=trie[now][x];
            if(y==0)
            {
                trie[now][x]=++nxt;
                now=nxt;
            }
            else
            {
                now=y;
            }
        }
        em[nxt]++;
    }
    len=str.length();
    now=0;
    int flag=0;
    for(j=0; j<len; j++)
    {
        x=str[j]-'a';
        y=trie[now][x];
        if(y==0)
        {
            cout<<"Not found\n";
            flag=1;
            break;
        }
        now=y;
    }
    if(flag==0)
    {
        if(em[now]>=1)
        {
            cout<<"Found\n";
        }
        else
        {
            cout<<"Not found\n";
        }
    }





    return 0;
}
