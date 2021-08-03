#include<stdio.h>
int main()
{
    int i,j=1;
    for(i=1,j=1;i<=20;j++){
        printf("%dx%d=%d\n",i,j,i*j);
        if(j==10){
            j=0;
            i++;
            printf("\n");
        }
    }
    return 0;
}
