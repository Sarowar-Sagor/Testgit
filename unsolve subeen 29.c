#include<stdio.h>
int main()
{
  int t;
  char st[100];
  scanf("%d",&t);
  while(t--)
  {
  scanf("%s",st);
  if(st[0]>='a' && st[0]<='z')
  printf("Lowercase Character\n");
  else if(st[0]>='A' && st[0]<='Z')
  printf("Uppercase Character\n");
  else if(st[0]>=48 && st[0]<=57)
  printf("Numerical Digit\n");
  else
  printf("Special Character\n");
  }
    return 0;
}
