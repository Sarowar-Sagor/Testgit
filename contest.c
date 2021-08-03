#include <stdio.h>
#include<math.h>
int main()
{
   long long a,b,i,low,high,mid,j,ar[200000],arb[200000];
   scanf("%lld",&a);
   for(i=0;i<a;i++)
    scanf("%lld",&ar[i]);
   scanf("%lld",&b);
   for(i=0;i<b;i++)
    scanf("%lld",&arb[i]);
    int count=0;
   for(i=0;i<b;i++)
   {
       low=0;
       high=a-1;
       for(;low<=high;)
       {
           mid=(low+high)/2;
           if(ar[mid]==arb[i])
           {
               count++;
               break;
           }
           else if(ar[mid]<arb[i])
           low=mid+1;
           else if(ar[mid]>arb[i])
            high=mid-1;

       }

   }
        if(count==b)
            printf("1\n");
        else
            printf("0\n");

	return 0;
}
