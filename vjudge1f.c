#include<stdio.h>
int main()
{
    int t,i,j;
    long long n,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        sum=0;
        j=3;
        while(j<n)
        {
        if(j%3==0 || j%5==0)
            sum+=j;
            j++;
            }
        printf("%lld\n",sum);

    }



 return 0;
 }

