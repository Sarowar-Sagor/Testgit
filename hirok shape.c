#include<stdio.h>
int main()
{
  int a,b,t,k,i,j;
  scanf("%d",&t);
  for(k=1;k<=t;k++)
  {
      scanf("%d%d",&a,&b);
     for(i=1;i<=a;i++)
     {
         for(j=1;j<=i;j++)
         {
         if(i==j)
            printf("%d\n",b);
         else
            printf("%d ",b);
         }
     }
     for(i=a-1;i>=1;i--)
     {
         for(j=1;j<=i;j++)
         {
        if(i==1 && k==t)
                printf("%d",b);
        else if(i==j)
            printf("%d\n",b);
         else
            printf("%d ",b);
         }
     }
   /* if(i==0 && k==t)
    break;
     printf("\n");*/
  }
    return 0;
}

