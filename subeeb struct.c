#include<stdio.h>
#include<string.h>
 typedef struct{
    char first[50];
    char last[50];
    }as;

    typedef struct{
    int id;
    as name;
    char grade[3];
    }ad;
void calculate_grade(ad *s,int mark)
{
    if(mark>=80)
        strcpy(s->grade,"A+");
    else if(mark>=70)
        strcpy(s->grade,"A");
        else if(mark>=60)
        strcpy(s->grade,"A-");
    else if(mark>=50)
        strcpy(s->grade,"B");
    else if(mark>=40)
        strcpy(s->grade,"C");
    else
        strcpy(s->grade,"F");
}

int main()
{
   /* struct student{
    int id;
    char name[50];
    //char *name;
    }one;
    //struct student one;
    one.id=1;
    strcpy(one.name,"Sarowar Alam Sagor");
  //  one.name="Sagor";
  // scanf("%[^\n]",one.name);
    printf("ID: %d\nName: %s\n",one.id,one.name);*/

    ad one[9];
    int i;
    int marks[]={72,82,60,20,50};
    for(i=0;i<3;i++){
        printf("Enter the id for the student %d: ",i+1);
        scanf("%d",&one[i].id);
        printf("Ente the first name for the student %d: ",i+1);
        scanf("%s",one[i].name.first);
        printf("Ente the last name for the student %d: ",i+1);
        scanf("%s",one[i].name.last);
        strcpy(one[i].grade,"");
        printf("\n\n");

    }
    for(i=0;i<3;i++)
        calculate_grade(&one[i],marks[i]);
    printf("\n\n");
    printf("ID\t\tName\t\t\tGrade\n");
for(i=0;i<3;i++)
 printf("%d\t\t%s %s\t\t%s\n",one[i].id,one[i].name.first,one[i].name.last,one[i].grade);


}

