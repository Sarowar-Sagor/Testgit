#include<stdio.h>
#include <string.h>
int main()
{
    int i,t,k,count;
    char first_line[10009],second_line[5];
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        getchar();
       gets(first_line);
         count=0;
       scanf("%s",second_line);
        for(i=0;i<strlen(first_line);i++)
        {
            if(second_line[0]>='a' && second_line[0]<='z')
            {
                if(second_line[0]==first_line[i] || second_line[0]-32==first_line[i])
                count++;
            }
            else
            {
                 if(second_line[0]==first_line[i] || second_line[0]+32==first_line[i])
                 count++;
            }

        }
        if(count==0)
                printf("'%c' is not present\n",second_line[0]);
        else
                printf("Occurrence of '%c' in '%s' = %d\n",second_line[0],first_line,count);
    }
    return 0;
}

