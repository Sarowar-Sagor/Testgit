#include<stdio.h>
int a,i,b;
struct table{
    int account_no,balance;
    char name[100];

}ab[10000];
void New()
{

}
void Update(int n)
{
    printf("Enter account number to change the name\n");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(b==ab[i].account_no)
            scanf(" %[^\n]",ab[i].name);
    }
}
void Balance(int n)
{
    printf("Enter account numbeer to see the balance\n");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(b==ab[i].account_no)
            printf("%d\n",ab[i].balance);
    }
}
void Cash_in(int n)
{
    int c;
     printf("Enter account numbeer and amount to cash in\n");
    scanf("%d%d",&a,&c);
    for(i=0;i<n;i++)
    {
        if(a==ab[i].account_no)
         ab[i].balance+=c;
    }

}
void Cash_out(int n)
{
    int d;
     printf("Enter account number and amount to cash out\n");
    scanf("%d%d",&a,&d);
    if(ab[a].balance>d)
    {
       for(i=0;i<n;i++)
    {
        if(a==ab[i].account_no)
            ab[i].account_no-=d;
    }
    }
    else
        printf("Insufficient amount,Try again...........\n");

}
int main()
{
    int n;
    printf("How many numbers you want to store\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter account no.: ");
        scanf("%d",&ab[i].account_no);
        printf("Enter Name: ");
        scanf(" %[^\n]",ab[i].name);
        printf("Enter balance: ");
        scanf("%d",&ab[i].balance);
    }
    for(; ;)
    {
         printf("1.New\n2.Update\n3.Balance\n4.Cash in\n5.Cash out\n6.Exit\n");
         printf("Enter your option\n");
         scanf("%d",&a);
         if(a==1)
            New(n);
         else if(a==2)
            Update(n);
         else if(a==3)
            Balance(n);
         else if(a==4)
            Cash_in(n);
         else if(a==5)
            Cash_out(n);
         else if(a==6)
         break;
         else
            printf("Invalid input,try again..................\n");

    }


}
