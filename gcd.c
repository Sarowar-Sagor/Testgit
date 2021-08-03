#include<stdio.h>
int main()
{
    int i,j,a,t,b,x,r=0,gcd;
    scanf("%d%d",&a,&b);
    if(a<b)
    {
    	 while(a!=0)
        {
            r=b%a;
            b=a;
            a=r;
        }
        printf("GCD=%d\n",b);
	}
    else
    {
        while(b!=0)
              {
                r=a%b;
                a=b;
                b=r;
              }
              printf("GCD=%d\n",a);

    }

}
