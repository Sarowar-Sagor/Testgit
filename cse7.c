#include<stdio.h>
int main()
{
    int day,a,b,year;
    printf("Enter the day= ");
    scanf("%d",&day);
    a=day/30;
    b=day%30;
    year=a/12;
    printf("month=%d day=%d  year=%d",a,b,year);




}
