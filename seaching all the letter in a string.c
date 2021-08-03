#include<stdio.h>
#include <string.h>
int main()
{
    int i,b,k,j;
   char st[10000];
   scanf("%d",&b);
   for(k=0;k<b;k++)
   {
      scanf(" %[^\n]",st);
      int count[26]={0},countt[26]={0};
      for(i=0;i<strlen(st);i++)
      {
          if(st[i]>='a' && st[i]<='z')
        count[st[i]-'a']++;
        else
            countt[st[i]-'A']++;
      }
      for(i=0;i<26;i++)
        if(countt[i]!=0)
        printf("%c = %d\n",i+'A',countt[i]);
      for(i=0;i<26;i++)
    {
          if(count[i]!=0)
        printf("%c = %d\n",i+'a',count[i]);
      }

   }

    return 0;
}
