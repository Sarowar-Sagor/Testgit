#include<stdio.h>
int main()
{
   long long a=1,b=1,c,n;
   printf("Enter the range of fibonacci series: ");
   scanf("%lld",&n);
   printf("Fibonacci series: %lld+%lld+",a,b);
   c=a+b;
   while(c<=n)
   {
       printf("%lld+",c);
       a=b;
       b=c;
       c=a+b;
   }


}
