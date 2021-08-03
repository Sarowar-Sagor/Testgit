#include<stdio.h>
void main()
{
    float a,b,c,d;
    printf("Your primary capital=");
    scanf("%f",&a);
    printf("Enter the month=");
    scanf("%f",&b);
    printf("percent of the interest=");
    scanf("%f",&c);
    d=a+(a*b*c)/100;
    printf("Your current bank balance is=%.3f",d);
}
