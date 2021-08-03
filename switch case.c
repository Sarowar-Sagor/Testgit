#include<stdio.h>
void main()
{
    int input,colour;
    printf("enter the digit \n");
    scanf("%d",&input);
    if(input>=1 && input<=4)
    {
    if(input ==1)
    printf("colour is red");
    else if(input ==2)
    printf("colour is blue");
    else if(input ==3)
    printf("colour is white");
    else if(input==4)
    printf("colour is orange");}
    else
    printf("colour is invalid ");


}
