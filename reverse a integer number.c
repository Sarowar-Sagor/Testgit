#include<stdio.h>
int main()
{
  int a,t,rev;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%d",&a);
      rev=0;
      while(a!=0)
      {
          rev=rev*10;
          rev=rev+a%10;
          a/=10;
      }
      printf("%d\n",rev);
  }
    return 0;
}
