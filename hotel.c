#include<stdio.h>
int b,sum=0;
void pizza(void)
{
    printf("How many numbers do you want to take\n");
    scanf("%d",&b);
    sum+=(b*480);

}
void burger(void)
{
    printf("How many numbers do you want to take\n");
    scanf("%d",&b);
    sum+=(b*300);

}
void hot_dog(void)
{
    printf("How many numbers do you want to take\n");
    scanf("%d",&b);
    sum+=(b*250);

}
void pasta(void)
{
printf("How many numbers do you want to take\n");
    scanf("%d",&b);
    sum+=(b*350);
}
void water(void)
{
    printf("How many numbers do you want to take\n");
    scanf("%d",&b);
    sum+=(b*20);
}
void Exit(void)
{
    printf("Your total cost is %d\n",sum);
    printf("Given money\n");
    scanf("%d",&b);
    if(b==sum)
        printf("Thank you Sir/Madam,,come again\n");
    else if(b>sum)
    {
        printf("Money back %d\n",b-sum);
        printf("Thank you Sir/Madam,,come again\n");

    }


}
int main()
{
    int i,a;
    for(; ;)
    {
        printf("1.Pizza=480\n2.Burger=300\n3.Hot dog=250\n4.Pasta=350\n5.Water=20\n6.Exit\n");
        printf("Enter your option\n");
        scanf("%d",&a);
        if(a==1)
            pizza();
        else if(a==2)
            burger();
        else if(a==3)
            hot_dog();
        else if(a==4)
            pasta();
        else if(a==5)
            water();
        else if(a==6)
        {
            Exit();
            break;
        }

        else
            printf("Invalid input,Try again..............\n");
    }
}
