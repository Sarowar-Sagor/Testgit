#include<stdio.h>
int main()
{
    float a,b,c,height;
    printf("Enter the parallel arms of trapezium and height= ");
    scanf("%f %f %f",&a,&b,&c);
    height=(0.5*(a+b)*c);
    printf("the area of the trapezium is =%f",height);

}
