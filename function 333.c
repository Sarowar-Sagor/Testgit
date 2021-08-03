#include<stdio.h>
int max(int b[]);
int main()
{
    int ar[]={-100,0,53,22,83,23,89,-132,201,3,85};
    int c=5;
    c=max(ar);
    printf("The minimum number is %d\n",c);


}

int max(int b[])
{
    int i,min;
    min=b[0];
    for(i=1;i<11;i++){
        if(b[i]<min)
            min=b[i];
    }
    return min;
}
