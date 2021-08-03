#include<stdio.h>
struct Teacher
{
    char name[100];
    int age;
    char dept[100];
    float salary;

}ob[10];

int main()
{
    FILE *fpin,*fpout;
    int i,n;
    scanf("%d",&n);
    fpin=fopen("teacher.txt","r");
    fpout=fopen("table.txt","w");

    for(i=0;i<n;i++)
    {
        fscanf(fpin,"%d%s%f%s",&ob[i].age,ob[i].name,&ob[i].salary,ob[i].dept);
    }
     fprintf(fpout,"Age | Name | Salary | Dept \n");
    for(i=0;i<n;i++)
    {
        fprintf(fpout,"%d\t%s  %0.f  %s\n",ob[i].age,ob[i].name,ob[i].salary,ob[i].dept);
        fprintf(fpout,"............................................................\n");
    }
    fclose(fpin);
    fclose(fpout);
}
