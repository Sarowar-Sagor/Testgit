
#include <stdio.h>
int main()
{
    int t,i,j,k,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&a);
       for(j=1;j<=a;j++)
        for(k=1;k<=a;k++)
        {
        if(k==a)
        {
            printf("*\n");

        }

        else
            printf("*");
        }


    }
    return 0;
}
