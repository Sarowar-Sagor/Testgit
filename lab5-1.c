#include<stdio.h>
int main()
{
    int marks[100],i,n,sum=0;
    printf("Enter number of students=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter mark of students %d=",i+1);
    scanf("%d",&marks[i]);
    sum+=marks[i];
}
    printf("Sum=%d",sum);

}
