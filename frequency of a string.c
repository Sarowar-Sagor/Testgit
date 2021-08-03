#include<stdio.h>
#include<string.h>
int main()
{
  char a[100],ch;
  int i,count=0;
  gets(a);
  printf("Enter a character to check\n");
  scanf("%c",&ch);
  for(i=0;a[i]!='\0';i++)
  {
      if(ch==a[i])
        count++;
  }
    printf("%d",count);
}
