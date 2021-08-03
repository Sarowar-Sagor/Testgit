#include<stdio.h>
#include<string.h>
int main()
{
  int t,j,a,i;
  char st[30][10003],temp[10003];
  scanf("%d",&t);
  while(t--)
  {
  	scanf("%d",&a);
  	for(i=0;i<a;i++)
        scanf("%s",&st[i]);
   for(i=0;i<a-1;i++)
    {
        for(j=i+1;j<a;j++)
            if(strcmp(st[i],st[j])>0)
        {
            strcpy(temp,st[i]);
            strcpy(st[i],st[j]);
            strcpy(st[j],temp);
        }
    }
    for(j=0;j<a;j++)
        printf("%s\n",st[j]);

  }
    return 0;
}
