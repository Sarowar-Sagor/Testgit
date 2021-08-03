#include<stdio.h>
#include<math.h>
int check[1009],prime[1009];
int main()
{
    long long t,a,b,i,j,k;
    a=sqrt(10000);
    for(j=3;j<=a;j+=2)
    {
        if(check[j>>1]==0)
        {
             for(k=j*j;k<=10000;k+=(j+j))
            check[k>>1]=1;
        }
    }
    prime[0]=2;
    int m=1;
    for(i=3;i<=10000;i+=2)
    {
        if(check[i>>1]==0)
        {
            printf("%d ",i);
            prime[m]=i;
            m++;
        }
    }
    return 0;
}

