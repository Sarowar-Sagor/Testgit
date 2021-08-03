#include <stdio.h>
#include <string.h>
int main()
{
  int a[150],b[150],j,max,i,count=0,countt=0;
  char ch[150];
  scanf("%s",ch);
  a[0]=0;
  for(i=0;i<strlen(ch);i++)
  {
      if(ch[i]=='A' || ch[i]=='E' || ch[i]=='O' || ch[i]=='I' || ch[i]=='U' || ch[i]=='Y')
      {
        a[++count]=i+1;
      }
  }
    a[++count]=strlen(ch)+1;
    for(i=0;i<count;i++)
  {
      b[i]=a[i+1]-a[i];
      countt++;
  }
  if(countt>=1)
  max=b[0];
  for(j=1;j<=count-1;j++)
    if(max<b[j])
    max=b[j];

    if(count==0)
  printf("%d\n",strlen(ch)+1);
  else
    printf("%d\n",max);
}
