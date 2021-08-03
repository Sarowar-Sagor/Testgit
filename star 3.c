#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=10;i++)
    {
        for(j=10;j>=i+1;j--)
            printf(" ");
        for(k=1;k<=i*2-1;k++)
            printf("*");
        printf("\n");
    }
}
