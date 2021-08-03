#include<stdio.h>
void plus_ten1(int a)
{
    a=a+10;
    printf("a=%d\n",a);
}
void plus_ten2(int *a)
{
    *a=*a+10;
}
int main()
{
    int i;
   /*int a;
   a=5;
   plus_ten1(a);
   printf("a=%d\n",a);
   plus_ten2(&a);
   printf("a=%d\n",a);*/
   char name[20],father[25],mother[25];


       scanf("%[^\n]",name);
        scanf("%[^\n]",father);
        //scanf("%[^\n]",mother);


   printf("%s &s",name,father);
}
