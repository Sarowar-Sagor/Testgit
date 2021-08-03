#include <stdio.h>
#include <string.h>
int main()
{
    int t,j;
    char n[102];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",n);
        if(n[strlen(n)-1]%2==0)
            printf("even\n");
        else
            printf("odd\n");

    }
}
