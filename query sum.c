#include<stdio.h>
int main()
{
     int t,i,j,n,p,q,a[35],sum,count;
     scanf("%d",&t);
     for(i=0;i<t;i++){
            sum=0,count=0;
        scanf("%d %d %d",&n,&p,&q);
        for(j=1;j<=n;j++)
        {
             scanf("%d",&a[j]);
        sum+=a[j];
            if(sum<=q && j<=p)
                count++;
        }
        printf("Case %d: %d\n",i+1,count);

     }





    }











