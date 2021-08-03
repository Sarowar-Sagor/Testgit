#include<stdio.h>
int main()
{
    double t,k=7;
    int count,i,j;
   for(i=0,j=1;i<=2;)
   {    count=0;
       for(j=k;j>=i+4;j--)
       {
           count++;
       printf("I=%d J=%d\n",i,j);
       }
        if(count==3)
       {
           i+=2;
           k+=2;
       }


   }


    return 0;
}

