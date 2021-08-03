#include<stdio.h>
int main()
{
    int i,f;
    for(i=1;i<=10;i++)
    {
        for(f=1;f<=i;f++)
            printf("* ");
        printf("\n");

    }

    printf("\n\n");
    for(i=10;i>=1;i--)
    {
        for(f=1;f<=i;f++)
            printf("* ");
        printf("\n");

    }



}
