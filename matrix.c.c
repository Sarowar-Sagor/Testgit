#include<stdio.h>
int main()
{
    int ax[100][100];
    int i,j,count=0,m,n;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
         for(j=0;j<m;j++){
            scanf("%d",&ax[i][j]);
            if(ax[i][j]==0){
                count++;
            }
         }

    }
    if(count>((m*n)/2)){
        printf("sparse matrix\n");
    }
    else{
        printf("Not sparse matrix\n");
    }



}
