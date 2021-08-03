#include<stdio.h>
int main()
{
    long int d1,d2,d3;
    scanf("%lld %lld %lld",&d1,&d2,&d3);
    if((d1+d2)<d3)
        printf("%lld\n",(d1*2+d2*2));
    else
        printf("%lld\n",d1+d2+d3);
}
