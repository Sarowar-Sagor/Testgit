#include<stdio.h>
int t;
int largest(int a,int b);
int main()
{
    int x,y;
    scanf("%d  %d",&x,&y);
    t=largest(x,y);
    printf("the largest number is=%d",t);


}
 int largest(int a,int b){
 t=a;
 if(t<b)
    t=b;
 return t;
 }




