#include <stdio.h>
int main()
{
     int n, count, sum=0;
      printf("Enter the value of n. ");
      scanf("%d",&n);
      for(count=1;count<=n;++count) //for loop terminates if count>n
         { sum+=count; /* this statement is equivalent to sum=sum+count */   }
       printf("Sum=%d",sum);
      return 0;  }
