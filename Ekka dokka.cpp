#include<stdio.h>
#include<string.h>
int main()
{
  char st[100];
  int count=0;
  scanf("%s",st);
  for(int i=0;i<strlen(st)-1;i++)
    if(st[i]=='s' && st[i]==st[i+1])
    count++;
    if(count==0)
        printf("no hiss\n");
    else
        printf("hiss\n");

}
