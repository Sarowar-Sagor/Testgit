#include<bits/stdc++.h>
using namespace std;
int main()
{
    int len,i,j,flag=0,cnt=0,a;
    string st;
    cin>>st;
    len=st.size();
    if(len%2==0)
    {
        a=len/2;
        for(i=0,j=len-1; i<a; i++,j--)
        {
            if(st[i]!=st[j])
            {
                flag=1;
                break;
            }
        }
    }
    else
    {
        a=len/2;
        for(i=0,j=len-1; i<=a; i++,j--)
        {
            if(st[i]!=st[j])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout<<st<<endl;
    }
    else
    {
        for(i=len-1; i>=1; i--)
        {
            if(st[i]==st[i-1])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        for(i=0;i<len-cnt;i++)
        {
            cout<<st[i];
        }
        for(i=len-cnt-2;i>=0;i--)
        {
            cout<<st[i];
        }
         cout<<endl;
    }




    return 0;
}
