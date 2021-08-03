#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d",&b);
        int sum=0,i;
        for(i=b-1;i>=1;i--)
            sum+=i;
        printf("%d\n",sum);
    }
  return 0;
}
