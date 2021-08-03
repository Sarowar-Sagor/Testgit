#include<stdio.h>
void compare2(int a,int b);
void compare(int *s,int *r);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    compare2(a,b);
    compare(&a,&b);

}
void compare2(int a,int b)
{
    b=a+b;
    a=b-a;
    b=b-a;
    printf("A=%d   B=%d\n",a,b);
}

void compare(int *s,int *r){
    *r=*r+*s;
    *s=*r-*s;
    *r=*r-*s;
    printf("A= %d    A=%d\n",*s,*r);
}
