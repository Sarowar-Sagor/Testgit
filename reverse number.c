
#include<stdio.h>
int main()
{
    int n,reverse=0,remp,a;
    printf("Enter the number: ");
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
        remp=n%10;
        reverse=reverse*10+remp;
        n/=10;
    }
    printf("The reverse number of the %d is %d\n",a,reverse);
}
