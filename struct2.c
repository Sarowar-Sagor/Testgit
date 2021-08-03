#include <stdio.h>
//#include<string.h>
struct student{
int roll;
char name[20];
double cgpa;
double cgpa2;
}student1[100];
int main()
{
    int i,j;
    for(i=0;i<6;i++){
        printf("Enter student Name %d: ",i+1);
        scanf("%s",student1[i].name);
        printf("Enter Roll : ");
        scanf("%d",&student1[i].roll);
        printf("Enter CGPA : ");
        scanf("%lf",&student1[i].cgpa);}
           /* for(i=0;i<3;i++){
        if(student1[i].cgpa>3.00)
            printf("above cgpa 3.00  Name =%s\n",student1[i].name);
        if(student1[i].cgpa<3.00)
            printf("under cgpa 3.00  Roll =%d\n",student1[i].roll);}*/
            for(i=0;i<6;i++)
                student1[i].cgpa2=student1[i].cgpa;
            double temp;
          for(i=0;i<6-1;i++)
            for(j=i+1;j<6;j++)
          {
              if(student1[i].cgpa>student1[j].cgpa)
              {
                  temp=student1[i].cgpa;
                  student1[i].cgpa=student1[j].cgpa;
                  student1[j].cgpa=temp;
              }
          }
          for(i=0;i<6;i++)
            if(student1[5].cgpa==student1[i].cgpa2)
          printf("Highest cgpa=%s\n",student1[i].name);

}
