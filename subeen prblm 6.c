#include <stdio.h>
#include <string.h>
int main()
{
    int t,i,sum,a;
    char s[10005];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%s",s);
        //printf("%d %d\n",s[0],s[4]);
        for(a=0;a<strlen(s);a++)
        {
             if(a==0 || a==4)
            sum+=s[a]-48;
        }

        printf("Sum = %d\n",sum);
    }
    return 0;
}
