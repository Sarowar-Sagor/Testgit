#include<stdio.h>
int main()
{
    int a,b,c,d,x,y,z,sum;
    float avg;
    printf("Enter the value of a b c and d= ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    x=(a<b)?a:b;
    y=(x<c)?x:c;
    z=(y<d)?y:d;
    sum=a+b+c+d-z;
    avg=sum/3;
    printf("avg is=%.3f",avg);         
	

}
