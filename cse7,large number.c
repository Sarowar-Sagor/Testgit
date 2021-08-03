 #include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b and c= ");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
   printf("a is the largest number=%d",a);
   else if((b>c)&&(b>a))
    printf("b is the largest number=%d",b);
    else
        printf("c is the largest number=%d",c);




}

