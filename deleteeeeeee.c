#include<stdio.h>
int main()
{
	int i,j,k,N[15],a=0,b=0,count=0,counto=0,c=0,d=0;
	for(i=1;i<=15;i++)
	{
		scanf("%d",&N[i]);

	}
	for(i=1;i<=15;i++)
		if(N[i]%2==0)
		{
			printf("par[%d] = %d\n",a++,N[i]);
			count++;
			if(count==5)
			break;
		}
		for(j=1;j<=15;j++)
			if(N[j]%2==1 || N[j]%2==-1)
		{
			printf("impar[%d] = %d\n",b++,N[j]);
			counto++;
			if(counto==5)
			{
				b=0;
				continue;
			}

		}
		for(k=i+1;k<=15;k++)
			if(N[k]%2==0)
				{
				    printf("par[%d] = %d\n",d++,N[k]);
					c++;
					if(c==5)
					{
						d=0;
						continue;
					}

				}


}
