#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int t,i,sum,a,b,c,d;
    char line[]="1 -2 1000 -50 20 7 445";
    char *p,*e;
    long input;
    int count=0;
    //p=line;
    for(p=line; ;p=e)
    {
        input=strtol(p,&e,10);
        if(p==e)
        {
            break;
        }
        count++;
    }
    printf("%d\n",count);
   // printf("%d\n",strlen(line));
    return 0;
}

