#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    b=(a/7);
    c=a%7;
    if(a==1)
    {
        cout<<"0"<<" "<<"1"<<endl;
    }
    else if(a<6)
    {
        cout<<"0"<<" "<<"2"<<endl;
    }
    else if(a==6)
    {
        cout<<"1"<<" "<<"2"<<endl;
    }
    else if(c==1 || c==2)
        cout<<(b*2)<<" "<<(b*2)+c<<endl;
    else if(c==6)
        cout<<(b*2)+1<<" "<<(b*2)+2<<endl;
    else if(c==0)
    {
        cout<<(b*2)<<" "<<(b*2)<<endl;
    }
    else
    {
        cout<<(b*2)<<" "<<(b*2)+2<<endl;
    }



    return 0;
}
