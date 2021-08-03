#include<stdio.h>
long long recur(long long a,long long b,long long c)
{
    if(a>b && a>c)
        return recur(a-1,b,c);
    else if(b>a && b>c)
        return recur(a,b-1,c);
    else if(c>a && c>b)
        return recur(a,b,c-1);
    else
        return (a+b+c);
}
int main()
{

   long long a,b,c;
   scanf("%lld%lld%lld",&a,&b,&c);
   printf("%lld\n",recur(a,b,c));
   return 0;

}
