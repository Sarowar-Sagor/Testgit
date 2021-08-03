//calloc initialized all the value to zero which memory he allocated....
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int* marks;
    int i,n;
    printf("Enter the number of students\n");
    scanf("%d",&n);
    marks=(int *)calloc(n,sizeof(int));
    if(marks==NULL)
    {
    	printf("Memory allocation failed\n");
    	return 1;
	}
    printf("Enter marks\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("The values are........\n");
    
    for(i = 0; i < n; i++)
    {
        printf("%d\n",marks[i]);
    }
    free(marks);
    
    return 0;
}
