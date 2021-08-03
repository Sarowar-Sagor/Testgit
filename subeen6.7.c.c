#include<stdio.h>
int main()
{
    int marks,count,i;
    int d[15]={58,65,89,78,56,54,52,58,69,96,78,96,67,58,51};
    for(marks=50;marks<=100;marks++){
        count=0;
        for(i=0;i<15;i++){
            if(d[i]==marks)
                count++;}


    printf("Marks:%d\t count:%d\n",marks,count);}
}
