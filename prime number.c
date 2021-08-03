#include<stdio.h>
#include <math.h>
int main()
{
    int n,i,j,t,flag;
    scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		flag=0;
		scanf("%d",&n);
		 for(j=2;j<=sqrt(n);j++)
    {
        if(n%j==0)
            flag=1;
    }

    if (flag==0 && n>1)
        printf("%d is a prime number\n",n);
    else
        printf("%d is not a prime number\n",n);

	}

    return 0;
}
