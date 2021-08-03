#include<stdio.h>
int ar[10000];
int main()
{
    int n,m,i,a;
    printf("How many numbers you want to store\n");
    scanf("%d",&n);
    printf("Enter the element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter element and index you want to store\n");
    scanf("%d%d",&a,&m);
    for(i=n-1;i>=m;i--)
        ar[i+1]=ar[i];
    ar[m]=a;
    printf("Inserted Array\n");
    for(i=0;i<n+1;i++)
        printf("%d\n",ar[i]);

}
