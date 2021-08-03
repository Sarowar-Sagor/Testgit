#include<stdio.h>
int main()
{
    int i,n,reverse=0,temp,remp;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        remp=temp%10;
        reverse=reverse*10+remp;
        temp/=10;
    }
    if(reverse==n)
        printf("%d is a palindrome number\n",n);
        else
        printf("%d is not a palindrome numbeer",n);
}
