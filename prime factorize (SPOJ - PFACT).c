#include <stdio.h>
#include<math.h>
int main()
{
    int check[100000]= {0},i,a,n,k,m=0,j,prime[1000];
    for(j=2; j*j<=10000; j++)
    {
        if(check[j]==0)
        {
            for(k=j*j; k<=10000; k+=j)
                check[k]=1;
        }
    }
    for(i=2; i<=10000; i++)
    {
        if(check[i]==0)
        {
            prime[m]=i;
            m++;
        }
    }
    printf("Enter the number to factorize\n");
    scanf("%d",&k);
    a=sqrt(k);
    printf("%d:",k);
    for(i=0; prime[i]<=a; i++)
    {
        while(k%prime[i]==0)
        {
            printf(" %d",prime[i]);
            k/=prime[i];
        }
    }
    if(k>1)
    {
        printf(" %d\n",n);
    }
    else
            {
        printf("\n");
    }
    return 0;

}

