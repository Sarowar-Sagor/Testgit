//when row or row and column in unknown........
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **ar,i,j,n,num[12],total;
	printf("Enter total number of class\n");
	scanf("%d",&total);
	ar=(int **)malloc(sizeof(int *)*total);
	if(ar==NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	for(i=0;i<total;i++)
	{
		printf("Enter number of students for class %d\n",i+1);
		scanf("%d",&n);
		num[i]=n;
		ar[i]=(int *)malloc(sizeof(int)*n);
		for(j=0;j<n;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	printf("Output\n");
	for(i=0;i<total;i++)
	{
		printf("Results for class %d\n",i+1);
		for(j=0;j<num[i];j++)
		{
			printf("%d\n",ar[i][j]);
		}
		printf("\n");
	}
	free(ar);
	return 0;
	
}
