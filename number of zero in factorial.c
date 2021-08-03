#include<stdio.h>
#include <math.h>
int main()
{
   int i,j,ar[200],a,k,b,count2=0,t,count5=0;
   scanf("%d",&b);
   for(k=0;k<b;k++)
   {
       scanf("%d",&a);
   for(i=2;i<=a;i++)
        ar[i]=i;
        count2=0;
   for(i=2;i<=a;i++)
   {
       while(ar[i]!=0)
       {
           if(ar[i]%2==0)
       {
           count2++;
           ar[i]/=2;

       }
       else
        break;
       }

   }
   count5=0;
    for(i=2;i<=a;i++)
   {
       while(ar[i]!=0)
       {
           if(ar[i]%5==0)
       {
           count5++;
           ar[i]/=5;

       }
       else
        break;
       }

   }
   t=count2;
   if(count2>count5)
    t=count5;
   printf("%d\n",t);
   }

    return 0;
}

