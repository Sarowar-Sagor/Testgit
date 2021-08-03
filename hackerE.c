#include<stdio.h>
#include<math.h>
int main()
{   
	int a,b;
	double c;
	scanf("%d%d",&a,&b);
	/*if(a==1 && b==1)
	{
		printf("1\n");
	}
/*	else if(a==1)
	{
		c=b/2.0;
		printf("%0.lf\n",ceil(c));
	}
	else if(b==1)
	{
		c=a/2.0;
		printf("%0.lf\n",ceil(c));
	}*/
    if(a%2==0 && b%2==0)
	{
		printf("%d\n",(a*b)/4);
	}
	else if(a%2==1 && b%2==1)
	{
		printf("%d\n",(((a-1)*(b-1))/4)+(a+b)/2);
	}
	else if(a%2==0 && b%2==1)
	{
		printf("%d\n",((a*(b-1))/4)+(a/2));
	}
	else
	{
		printf("%d\n",((a-1)*b)/4+(b/2));
	}
}
