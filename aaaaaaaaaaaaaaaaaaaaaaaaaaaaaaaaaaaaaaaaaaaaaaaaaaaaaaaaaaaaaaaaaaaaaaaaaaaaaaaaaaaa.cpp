#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{   int n;
    cout<<"n=";
    cin>>n;
    long a[n];
    int i,lge;

    cout<<"Enter in "<<n<<" "<<"amount of integers in one list :";
    for(i=0;i<n;i+=1)
    {
        cin>>a[i];
    }
    lge=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>lge)
        {
            lge=a[i];
        }
        else
        {
            continue;
        }
    }
    cout<<"\n"<<"The largest integer is:"<<lge<<"\n"<<"It's complexity is O(n)"<<"\n\n";
    return 0;
}
