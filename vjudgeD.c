#include<stdio.h>
#include<string.h>
int main()
{
    char ch[101];
    int i,n,a;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%s",ch);
    //a=strlen(ch);
    for(a=0;ch[a]!='\0'  ;a++);

       //printf("%d",i);
        if(a<=10)
            printf("%s\n",ch);
                else
                printf("%c%d%c\n",ch[0],a-2,ch[a-1]);}




}
