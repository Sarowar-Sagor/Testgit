#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,l;
    char st[200];
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        int count=0,countt=0;
       scanf("%s",st);
       l=strlen(st);
       for(i=0;i<l;i++)
       {
           if(st[i]=='a' || st[i]=='e'  || st[i]=='i'  || st[i]=='o'  || st[i]=='u')
            {
                  continue;
            }
            else
            {
                count++;
            }

       }
       for(i=0;i<l;i++)
       {
           if((st[i]>='a' && st[i]<='z') && (st[i]=='a' || st[i]=='e' || st[i]=='i' || st[i]=='o' || st[i]=='u'))
            {
                continue;
            }
            else
            {
                countt++;
            }
       }
       if(count<countt)
       {
           printf("%d\n",count);
       }
       else
       {
           printf("%d\n",countt);
       }

    }
    return 0;
}
