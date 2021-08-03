#include<stdio.h>
struct student{
int roll;
char name[20];
double cgpa;
}ob1[100];
int main()
{
    int i,j,p;
    double temp;
    FILE *ab,*cd;
    ab=fopen("student.txt","r");
    cd=fopen("show student.txt","w");
    for(i=0;i<5;i++)
            fscanf(ab, "%s%d%lf",ob1[i].name,&ob1[i].roll,&ob1[i].cgpa);
    //while(fscanf(ab, "%s%d%lf",ob1[i].name,&ob1[i].roll,&ob1[i].cgpa)!=EOF);

        fprintf(cd,"Name\t\tRoll\t\tCGPA\n");
     for(i=0;i<5;i++)
        fprintf(cd,"%s\t\t%d\t\t%0.2lf\n",ob1[i].name,ob1[i].roll,ob1[i].cgpa);
        fprintf(cd,"\n\n");
        for(i=0;i<4 ;i++){
            for(j=i+1;j<5;j++)
                if(ob1[i].cgpa>ob1[j].cgpa)
               {

                temp=ob1[i].cgpa;
            ob1[i].cgpa=ob1[j].cgpa;
                ob1[j].cgpa=temp;}}
                for(i=0;i<5;i++)
                    fprintf(cd,"%0.2lf ",ob1[i].cgpa);

                    fprintf(cd,"\n\n");


            scanf("%d",&p);
             for(i=0;i<5;i++)
                if(ob1[i].roll==p)
                fprintf(cd,"%s",ob1[i].name);




                  /*  for(i=0;i<5;i++)
                    if(ob1[i].cgpa=ob1[4].cgpa)
                        fprintf(cd,"%s",ob1[i].name);*/

                   // fprintf(cd,"s",ob1[4])



    fclose(ab);
    fclose(cd);





}
