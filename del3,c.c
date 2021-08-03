#include <stdio.h>
int main()
{
    int a,b,c,t,i,d,e;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        e=b%c;
        if(c==1 && a==1)
        {
            printf("%d\n",b+1);
        }
        else if(c==1)
        {
            printf("1\n");
        }
        else if(b<c || c<a)
        {
           printf("%d\n",c);
        }
        else
        {
            printf("%d\n",(b-e+c));
        }
    }
}
