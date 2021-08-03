#include<stdio.h>
int main()
{
    int ax[3][3];
    int i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    scanf("%d",&ax[i][j]);

    //ax[2][2]=1000;
    printf("the matrix is\n");
    for(i=0;i<3;i++)
         {
    for(j=0;j<3;j++)
    printf("%d\t",ax[i][j]);
    printf("\n");
    }

    printf("the diagonal is:\n");
     for(i=0;i<3;i++)
    for(j=0;j<3;j++)
      if(i==j){
        printf("%d\n",ax[i][j]);
        }

}

