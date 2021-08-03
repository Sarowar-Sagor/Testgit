#include<stdio.h>
struct employee{
int employee_id;
char name[50];
int salary;
char date[15];
}ab[100];
int main()
{
    int i,j,m,n,p;
    FILE *a, *b;
    a=fopen("lab final.txt","r");
    b=fopen("query file.txt","w");
    printf("How many employee do you want to take: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
            fscanf(a, "%d%s%d%s",&ab[i].employee_id,ab[i].name,&ab[i].salary,ab[i].date);
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


    fclose(a);
    fclose(b);


}
