/**Author:Sagor
//Date:19/05/2019*/
#include<bits/stdc++.h>

using namespace std;

#define pi acos(-1)
#define ll long long
#define sc scanf
#define pf printf
int ar[200009];
string st;

int main()
{
    int n,x,y,i,cnt=0,len;
    cin>>n>>x>>y;
    cin>>st;
    len=st.length();
    for(i=len-1;i>=len-y;i--)
    {
        if(st[i]-48!=0)
        {
            cnt++;
        }
    }
    if(st[len-y-1]-48!=1)
    {
        cnt++;
    }
    for(i=len-y-2;i>=len-x;i--)
    {
        if(st[i]-48!=0)
        {
            cnt++;
        }
    }
    cout<<cnt<<"\n";



    return 0;
}
