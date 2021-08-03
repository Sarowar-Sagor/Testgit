#include <stdio.h>
int main()
{
    int t,i,sum,a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d",&a);
        b=a%10;
        //c=a/10;
        while(a!=0)
        {
            d=a%10;
            c=a/10;
            a=c;

        }
        printf("Sum = %d\n",d+b);
    }
    return 0;
}
