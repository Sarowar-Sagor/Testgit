#include <stdio.h>
#include <math.h>
int main()
{
    long long a,b,c,d,e,fsum=0;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    if(c>=d)
   printf("%lld\n%lld\n%lld",a,b,c);
   else if(d<=2*c)
       printf("%lld\n%lld\n%lld",a+1,a,d);
   else
    printf("-1");




}
