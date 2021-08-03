#include<stdio.h>
int main()
{
  int i,j,p;
  long long int ab[5000],a=0,b=1,c;
  c=a+b;
  ab[1]=0;
  ab[2]=1;
  for(i=3;i<=90;i++)
  {
      ab[i]=c;
      a=b;
      b=c;
      c=a+b;
  }
  for(i=3;i<=90;i++)
  printf("%lld\n",ab[i]);
  scanf("%d",&p);
  printf("%lld",ab[p]);
  }
