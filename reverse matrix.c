#include<stdio.h>
int main()
{
    int ax[3][3];
    int i,j;
    printf("Enter a 3 by 3 matrix:\n");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&ax[i][j]);
    printf("the matrix is\n");
    for(i=0;i<3;i++)
         {
    for(j=0;j<3;j++)
    printf("%d\t",ax[i][j]);
    printf("\n");
    }
    printf("the reverse matrix is:\n");
    for(i=2;i>=0;i--){
        for(j=2;j>=0;j--)
        printf("%d\t",ax[i][j]);
        printf("\n");}


}
