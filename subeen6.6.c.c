#include<stdio.h>
int main()
{
    int a[5]={87,65,89,84,93},b[5]={89,56,84,78,96},c[5]={87,96,98,45,21},i;
    double d[5];
    for(i=0;i<5;i++){
        d[i]=a[i]/4.0+b[i]/4.0+c[i]/2.0;
        printf("Roll no:%d\t total marks:%0.0lf\n",i+1,d[i]);}
}
