#include<stdio.h>
#include<string.h>
struct bank{
    char name[30];
    long int id;
    int ammount;
    int interset;
}a[20];
void table(int n);
void id(int n);
void money(int i,int n);
void amm(int i,int n);
void max(int i,int n);
int main()
{
    int i,n,o,j;
    printf("Enter The num of customer:\n");
    scanf("%d",&n);
    printf("Enter Customer Data:\n");
    for(i=0;i<n;i++){
        printf("id:");
        scanf("%d",&a[i].id);
        printf("Ammount:");
        scanf("%d",&a[i].ammount);
        printf("Name:");
        scanf("%s",&a[i].name);
        a[i].interset=a[i].ammount/1000;
    }
    table(n);
printf("\nWhat do u want to do?\n");
printf("1.find a ID.\n2.people based on money.\n3.ammount after years.\n");
printf("4.Who has the most money.\n0.exit.\n");
printf("Enter your option:\n");
scanf("%d",&o);
while(o!=0){
switch(o){
case 1:id(n);break;
case 2:money(i,n);break;
case 3:amm(i,n);
case 4:max(i,n);
}
printf("\n\nWhat do u want to do?\n");
printf("1.find a ID.\n2.people based on money.\n3.ammount after years.\n4.Who has the most money.\n0.Exit.\n");
printf("Enter your option:\n");
scanf("%d",&o);
}

}
void table(int n){
    int i;
    printf("\t\t  Cstomar Table:\n\t\t-------------------\n");
      printf(" -----------------------------------------------------------\n");
    printf(" | Sl. NO.\t| ID\t| Name\t| Ammount\t| Interest |\n");
    printf(" -----------------------------------------------------------\n");
    for(i=0;i<n;i++){
        printf(" | %d\t\t| %d\t| %s\t| %d\t\t| %d\t   |\n",i+1,a[i].id,a[i].name,a[i].ammount,a[i].interset);
        printf(" -----------------------------------------------------------\n");

    }

}
void id(int n){
int x,i;
printf("Enter id to search:\n");
scanf("%d",&x);
for(i=0;i<n;i++)
if(x==a[i].id){
    printf("Name:%s\n",a[i].name);
    printf("Ammount:%d\n",a[i].ammount);
    printf("Interest:%d\n",a[i].interset);
}
getch();

}
void money(int i, int n){
    int u,l;
printf("\nEnter uppeer limit:\n");
scanf("%d",&u);
printf("Enter lower limmit:\n");
scanf("%d",&l);
printf("People in the Range are:\n");
for(i=0;i<n;i++)
    if(a[i].ammount>=l&&a[i].ammount<=u)
{
    printf("id:%d\n",a[i].id);
    printf("name:%s\n",a[i].name);
    printf("ammount:%d\n",a[i].ammount);
}
getch();
}
void amm(int i,int n){int y,b,c,d;
printf("Enter year:\n");
scanf("%d",&y);
printf("Enter customer id:\n");
scanf("%d",&b);
for(i=0;i<n;i++)
if(b==a[i].id){
        d=a[i].ammount;
    for(c=1;c<=y;c++){
        d+=(d/1000)*12*c;
    }printf("The id %d will have %d money after %d year.\n",a[i].id,d,y);
}
}
void max(int i,int n){
int x=a[0].ammount;
for(i=1;i<n;i++)
    if(x<a[i].ammount)
        x=a[i].ammount;
for(i=0;i<n;i++)
    if(a[i].ammount==x)
{
    printf("id:%d\n",a[i].id);
    printf("name:%s\n",a[i].name);
    printf("Ammount:%d\n",a[i].ammount);
}
}
