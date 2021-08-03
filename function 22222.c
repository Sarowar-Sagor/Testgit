#include<stdio.h>
int compare(int x,int y,int z);
int main()
{
    int a,b,c,greatest;
    scanf("%d %d %d",&a,&b,&c);
    greatest=compare(a,b,c);
    printf("Greatest Numbeer is =%d",greatest);

}

int compare(int x,int y,int z){
int t;
    t=x;
    if(t<y)
        t=y;
    if(t<z)
        t=z;
    return t;}
