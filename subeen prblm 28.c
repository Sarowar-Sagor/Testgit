#include<stdio.h>
int main()
{
  int i,a,t,ar[100];
  scanf("%d",&t);
  while(t--)
  {
  	scanf("%d",&a);
  	for(i=0;i<a;i++)
  	scanf("%d",&ar[i]);
  	int count=0,countt=0;
  	for(i=0;i<a-1;i++)
  	{
  		if(ar[i]<=ar[i+1])
  		count++;
  	    if(ar[i]>=ar[i+1])
  		countt++;
	  }
	  if(count==a-1|| countt==a-1)
	  printf("YES\n");
	  else
	  printf("NO\n");
  }
    return 0;
}
