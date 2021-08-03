#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
   srand(time(0));
   for(int i=0;i<2000;i++)
   printf("%d ",rand()%99999999);

    return 0;
}

