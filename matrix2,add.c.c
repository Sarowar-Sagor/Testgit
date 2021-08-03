#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("We are initiating a 3 by 3 mattix\n ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",&a[i][j]);
   /* printf("Given 3 by 3 matrix\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");}*/
        printf("Enter the b matrix:\n");
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",&b[i][j]);
    /*printf("Given 3 by 3 matrix\n");
     for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%d\t",b[i][j]);
        printf("\n");}*/
         printf("the c matrix is\n");
        for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        c[i][j]=a[i][j]+b[i][j];

        for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        printf("%d\t",c[i][j]);
        printf("\n");}
}
