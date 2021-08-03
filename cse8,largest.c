#include<stdio.h>
int main()
{
    int a,b,c,d,e,t;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    t=a;
    if(t<b)
        t=b;
    if(t<c)
        t=c;
    if(t<d)
        t=d;
    if(t<e)
        t=e;
    printf("the largest number is=%d",t);


}
