#include<stdio.h>
#include<math.h>
int main()
{

int b,h,n,i,t;
double v,H,area,area1,B,h1;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
    scanf("%d%d%d",&b,&h,&n);
    v=acos(-1.00);
    H=atan(h*1.00/b);
    H=(H*180)/v;
    B=180-(n+H);
    h1=(((b*1.0)/(sin((B*v)/180.00)))*sin((H*v)/180.00));
    area1=(.5*b*h1*sin((n*v)/180.00));
    area=(.5*b*h);
    printf("Case %d: %0.3lf %0.3lf\n",i,area1,(area-area1));
}
    return 0;

}
