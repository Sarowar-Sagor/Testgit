#include<stdio.h>
struct bank_customer{
 int id;
 int account_number;
 int balance;
 int loan_issued;
 char name[25];
};
int id_balance(struct bank_customer *p)
{
    scanf("%d",p->id);
    //printf("%d",p->balance);
    return;
}
int main()
{
    int i,n,d,a[100];
    struct bank_customer s;
    printf("How many number of customer do you want to query\n");
    scanf("%d",&n);
    //for(i=0;i<n;i++)

        printf("Enter the id,account number, balance and loan issued\n");
        scanf("%d%d%d%d",&s.id,&s.account_number,&s.balance,&s.loan_issued);
        printf("Enter the name\n");
        scanf("%s",s.name);


        id_balance(&s);
        printf("%d",p->balance);



}
