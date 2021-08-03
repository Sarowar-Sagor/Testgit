#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,*ptr;
    x=10;
    ptr=&x;
    *ptr=*ptr+1;
    printf("before ptr increment\n");
    printf("..........................\n");
    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("ptr = %d\n",ptr);
    printf("*ptr = %d\n",*ptr);
    printf("&*ptr = %d\n",&*ptr);

    ptr=ptr+1;
    printf("\n");
    printf("After ptr incerment \n");
    printf(".......................\n");
    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("ptr = %d\n",ptr);
    printf("*ptr = %d\n",*ptr);
    printf("&*ptr = %d\n",&*ptr);
    printf("PAUSE");
    return 0;


}
