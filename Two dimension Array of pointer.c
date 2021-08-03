#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ar[5],n[5],i,j,m;
	for(i=0;i<5;i++)
	{
		printf("Enter number of  student for class %d\n",i+1);
		scanf("%d",&m);
		n[i]=m;
		ar[i]=(int *)malloc(sizeof(int)*m);
		if(ar[i]==NULL)
        {
            printf("Memory allocation failed\n");
            return 1;
        }
		for(j=0;j<m;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	printf("Output\n");
	for(i=0;i<5;i++)
	{
		printf("Results for class %d\n",i+1);
		for(j=0;j<n[i];j++)
		{
			printf("%d\n",ar[i][j]);
		}
	}
	free(ar[5]);
}
