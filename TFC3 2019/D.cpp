#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a[100009],b,i;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];

    }
    for(i=0; i<n; i++)
    {
        b=a[i]/3;
        if(a[i]==1 || a[i]==2)
        {
            cout<<"0\n";
        }
        else if(a[i]%3==0)
        {
            cout<<b*2<<endl;
        }
        else
        {
            cout<<(b*2)+1<<endl;
        }
    }


    return 0;
}
