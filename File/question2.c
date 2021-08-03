#include<stdio.h>
struct employee{
int employee_id;
char name[50];
int salary;
char date[15];
}ab[100];
int main()
{
    int i,j,m,n,p,temp,temp1,temp2,temp3;
    FILE *a, *b;
    a=fopen("lab final.txt","r");
    b=fopen("query file.txt","w");
    printf("How many employee do you want to take: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
            fscanf(a,"%d%s%d%s",&ab[i].employee_id,ab[i].name,&ab[i].salary,ab[i].date);
    printf("Enter the id to search: ");
    scanf("%d",&m);
    for(i=0;i<n;i++){
        if(ab[i].employee_id==m)
            fprintf(b,"%d\n",ab[i].salary);
    }

    printf("Enter the id to search: ");
    scanf("%d",&p);
    for(i=0;i<n;i++){
        if(ab[i].employee_id==p)
            fprintf(b,"%s\n",ab[i].name);

    }
    fprintf(b,"\n\n");

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
            if(ab[i].salary>ab[j].salary)
        {
            temp=ab[i].salary;
            ab[i].salary=ab[j].salary;
            ab[j].salary=temp;

        }
    }
    fprintf(b,"\n\n");
    for(i=0;i<n;i++)
            fprintf(b,"%d %s %d %s\n",ab[i].employee_id,ab[i].name,ab[i].salary,ab[i].date);


    fclose(a);
    fclose(b);


}
