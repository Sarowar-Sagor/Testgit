#include<stdio.h>
int main()
{
    int ar[]={10,20,30,40,50,60,70,80,90,100},i,j,temp;
    for(i=0,j=9;i<=4,j>=5;i++,j--){
        temp=ar[j];
        ar[j]=ar[i];
        ar[i]=temp;}

    for(j=0;j<10;j++){
    printf("%d\n",ar[j]);
    }

}
