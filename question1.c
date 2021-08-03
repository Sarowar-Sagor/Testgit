#include<stdio.h>
int main()
{
    int i,j,n,temp;
    double ab[200];
    printf("How many element do you want to Bubble sort: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%lf",&ab[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
            if(ab[i]>ab[j])
            {
                temp=ab[i];
                ab[i]=ab[j];
                ab[j]=temp;
            }
    }
    printf("Bubble sort of The Array...............\n");
    for(i=0;i<n;i++)
        printf("%0.3lf\n",ab[i]);


}
