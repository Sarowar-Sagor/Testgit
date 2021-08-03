#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c;
    float s,area;
    printf("Enter 3 integer value:");
    scanf("%d %d %d",&a,&b,&c);
    s=((a+b+c)/2);
    area =sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle is:%f",area);
    return 0;

}
