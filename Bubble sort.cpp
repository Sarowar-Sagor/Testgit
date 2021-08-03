#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a,n,number[30000],k;
    cout<<"Size of the array\n";
    cin>>n;
    cout<<"Enter element\n";
    for(i=0;i<n;++i)
    {
        cin>>number[i];
    }
    for(i=0;i<n;++i)
    {
        for(j=0;j<n-i-1;++j)
        {
            if(number[j]>number[j+1])
            {
                a= number[j];
                number[j]=number[j+1];
                number[j+1]=a;
			}
		}
	}
    cout<<"After bubble sort\n";
    for (j=0;j<n;++j)
    {
        cout<<number[j]<<" ";
    }
    cout<<"\n";
    return 0;


}






















