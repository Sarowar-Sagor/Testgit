#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{   int ax[60],i,sum=0;
    float avg;
    srand(time(0));
    for(i=0;i<60;i++){
        ax[i]=rand()%101;

    printf("ax[%d]=%d\n",i+1,ax[i]);}
    for(i=0;i<60;i++)
        sum+=ax[i];
    avg=1.0*sum/60;
    printf("sum=%d   average=%.3f ",sum,avg);
    printf("\nFirst prize=%d",rand()%101);



}
