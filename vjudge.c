#include <stdio.h>
int main()
{
    long long check[100000]={0},i,t,a=100,k,j;
        for(j=2;j*j<=a;j++)
    {
        if(check[j]==0)
        for(k=j*2;k<=a;k+=j)
        check[k]=1;

    }
    for(k=2;k<=a;k++)
    {
         printf("%lld: ",k);
        for(i=2;i<=k;i++)
        if(check[i]==0 && k%i==0)
        printf("%lld ",i);
        printf("\n");
    }

    }

