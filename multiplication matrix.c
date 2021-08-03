#include <stdio.h>
int main()
{
    int a[15][15],b[15][15],c[15][15],i,j,k,r1,c1,r2,c2;
    printf("Enter r1 and c1\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter r2 and c2\n");
    scanf("%d%d",&r2,&c2);
    if(c1!=r2)
        printf("Invaid input,please try again............\n");
    else
    {
        for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
    scanf("%d",&a[i][j]);


    for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
            scanf("%d",&b[i][j]);

   for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
            c[i][j]=0;

            for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
            for(k=0;k<c1;k++)
            c[i][j]+=a[i][k]*b[k][j];

        for(i=0;i<r1;i++){
        for(j=0;j<c2;j++)
            printf("%d\t",c[i][j]);
        printf("\n");


    }

}
}
