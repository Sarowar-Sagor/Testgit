#include<stdio.h>
#include<string.h>
typedef struct{
char name[20];
char father[20];
char mother[20];
int id,day,month,yr;
}ab;
int main()
{
    int i;
    ab one[10];
    for(i=0;i<2;i++)
    {
         printf("Enter the person %d: ",i+1);
        scanf("%s",one[i].name);
        printf("Enter his father name %d: ",i+1);
        scanf("%s",one[i].father);
        printf("Enter his mother name %d: ",i+1);
        scanf("%s",one[i].mother);
        printf("Enter his date of birth %d: ",i+1);
        scanf("%d%d%d",&one[i].day,&one[i].month,&one[i].yr);
        printf("Enter his id number %d: ",i+1);
        scanf("%d",&one[i].id);
        printf("\n\n");
    }
     for(i=0;i<2;i++){
     printf("Name: %s\nFather: %s\nMother: %s\nDate of Birth: %d/%d/%d\nID NO: %d\n",one[i].name,one[i].father,one[i].mother,one[i].day,one[i].month,one[i].yr,one[i].id);
    printf("\n\n");}
}
