#include<stdio.h>
#include<string.h>
int main()
{
  int a=10,b=5;
  b=a+b;
  a=b-a;
  b=b-a;
  printf("A=%d  B=%d",a,b);


}
