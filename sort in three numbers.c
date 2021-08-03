#include <stdio.h>
int main()
{
   int a,b,c,d,t,i;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
        scanf("%d%d%d",&a,&b,&c);
   if(a>b)
   {
       d=a;
       a=b;
       b=d;
   }
   if(a>c)
   {
       d=a;
       a=c;
       c=d;
   }
   if(b>c)
   {
       d=b;
       b=c;
       c=d;
   }
   printf("Case %d: %d %d %d\n",i,a,b,c);
   }
    return 0;
}

