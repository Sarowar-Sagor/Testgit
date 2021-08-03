 #include<stdio.h>
int main()
{
    int a,b,c,d,t,sum;
    float avg;
    printf("Enter the numbers of the ct= ");
    scanf("%d  %d  %d  %d",&a,&b,&c,&d);
    t=a;
    if(t>b)
        t=b;
    if(t>c)
        t=c;
    if(t>d)
        t=d;
    sum=a+b+c+d-t;
    avg=sum/3;
    printf("the average marks is=%.3f",avg);
    return 0;
}
