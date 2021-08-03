#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a,n,ar[10000];
    cout<<"size of array\n";
    cin>>n;
    cout<<"Enter element\n";
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for (i=1;i<n;i++)
    {
        a=ar[i];
        j=i-1;
        while (j>=0 && ar[j]>a)
        {
            ar[j+1]=ar[j];
            j=j-1;
        }
        ar[j+1]=a;
    }
    cout<<"Sorted element\n";
    for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
