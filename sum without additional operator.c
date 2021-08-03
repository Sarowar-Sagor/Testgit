#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter the value of a and b=");
    scanf("%d %d",&a,&b);
    sum=a-~b- 1;
    printf("the sum is =%d",sum);

}
