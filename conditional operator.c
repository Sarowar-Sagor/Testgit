#include<stdio.h>
int call(int x);
int main()
{
	int a,b,i,x,y,c,z;
	scanf("%d%d%d",&x,&y,&z);
	b=(x<y)?y:x;
	a=(b<z)?z:b;
	printf("the highest number= %d",a);

/*	c=(x>y)?(y>z)?300:200:20;
	printf("\n %d",c);*/
   return 0;

}
