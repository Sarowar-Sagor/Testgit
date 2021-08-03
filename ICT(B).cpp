#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int i,a,n,k;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);

    }
    sort(v.begin(),v.end());
    cin>>k;
    for(i=0;i<k;i++)
    {
        cin>>a;
        cout<<v[a]<<endl;
    }
    return 0;
}


