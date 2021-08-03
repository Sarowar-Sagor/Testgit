#include<stdio.h>
int main()
{
    int ar[10]={10,20,30,40,50,60,70,80,90,100},i,temp,j;
    for(i=0,j=9;i<=4,j>=5;i++,j--)
    {
        temp=ar[i];
        ar[i]=ar[j];
        ar[j]=temp;
    }
    for(i=0;i<10;i++)
        printf("%d\n",ar[i]);
   /* for(i=9;i>=0;i--){     (this is another process)
            printf("%d\n",ar[i]);*/



}
