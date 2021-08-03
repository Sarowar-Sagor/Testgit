/**Author:Sagor
//Date:31/03/2019*/
#include<bits/stdc++.h>

using namespace std;

#define pi acos(-1)
#define ll long long
int ar[10000],x,t,j,k,i,maxn;
char st[10000];
int main()
{
    /*ios_base::sync_with_stdio(false);
    cin.tie(NULL);*/
    cin>>t;
    while(t--)
    {

        scanf(" %[^\n]",st);
        stringstream str(st);
        string word;
        i=0,maxn=0;
        while(str>>word)
        {
            stringstream inte(word);
            inte>>x;
            ar[i]=x;
            i++;
        }
        for(j=0; j<i-1; j++)
        {
            for(k=j+1; k<i; k++)
            {
                maxn=max(__gcd(ar[j],ar[k]),maxn);
            }
        }
        cout<<maxn<<"\n";
    }




    return 0;
}

