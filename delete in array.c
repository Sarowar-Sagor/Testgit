#include<stdio.h>
int ar[1000];
int main()
{
    int n,m,i,a,index;
    printf("How many numbers you want to store\n");
    scanf("%d",&n);
    printf("Enter the element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter element you want to delete\n");
    scanf("%d",&a);
    for(i=0;i<n;i++)
        {
            if(a==ar[i])
                index=i;
                break;
        }
    for(i=index;i<n-1;i++)
    {
        ar[i]=ar[i+1];
    }
    printf("Deleted Array\n");
    for(i=0;i<n-1;i++)
        printf("%d\n",ar[i]);


}

