#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum;
    cin>>n;
    sum=(n*(n+1))/2;
    double ans;
    ans=(sum*1.00)/n;
    printf("%0.7lf\n",ans);


    return 0;
}
