#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,t,x1,x2,x3,x4,y1,y2,y3,y4;
    scanf("%lld",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%lld%lld%lld%lld%lld%lld%lld%lld",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if((x2-x1)==0 && (x4-x3)==(y2-y1))
		printf("1\n");
		else if((x4-x3)==0 && (y4-y3)==(x2-x1))
		printf("1\n");
		else if((x2-x1)==0 || (x4-x3)==0 && (y2-y1)==(y4-y3))
		printf("2\n");
		 else if(((y2-y1)/(x2-x1))==((y4-y3)/(x4-x3)))
		 printf("2\n");
		 else if(((y2-y1)/(x2-x1))*((y4-y3)/(x4-x3))==-1)
		 printf("1\n");
		 else 
		 printf("0\n");
	}
   
    return 0;
}
