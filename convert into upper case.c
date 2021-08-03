#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i;
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]='A'+(s[i]-'a');
    }
    puts(s);
}
