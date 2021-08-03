#include<stdio.h>
#include<math.h>
int main()
{
  int t,i;
  double r1,r2,r3,x,y,z,area=0,s=0,anglea=0,angleb=0,anglec=0,areaa=0,areab=0,areac=0;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
      scanf("%lf%lf%lf",&r1,&r2,&r3);
      s=r1+r2+r3;
      area=sqrt(s*(s-(r2+r1))*(s-(r3+r2))*(s-(r1+r3)));
      x=r1+r2;
      y=r1+r3;
      z=r2+r3;
      anglea=acos(((x*x)+(y*y)-(z*z))/(2*x*y));
      angleb=acos(((x*x)+(z*z)-(y*y))/(2*x*z));
      anglec=acos(((y*y)+(z*z)-(x*x))/(2*y*z));
      //anglec=(3.14159265-(anglea+angleb));
     // printf("%lf %lf %lf",anglea,angleb,anglec);
      areaa=0.5*anglea*r1*r1;
      areab=0.5*angleb*r2*r2;
      areac=0.5*anglec*r3*r3;
      printf("Case %d: %0.9lf\n",i+1,(area-(areaa+areab+areac)));

  }
  }
