#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,i;
    char st[400];
    cin>>t;
    for(i=0;i<t;i++)
    {
        int flag=0,j;
        scanf(" %[^\n]",st);
        b=strlen(st);
        for(j=0;j<b-2;j++)
        {
            if(st[j]=='n' && (j==0 || st[j-1]==' '))
            {
                if(st[j+1]=='o' && st[j+2]=='t' && (st[j+3]==' ' || st[j+3]=='\0'))
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"Real Fancy\n";
        }
        else
        {
            cout<<"regularly fancy\n";
        }
    }
    return 0;

}

