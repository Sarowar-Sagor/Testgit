#include<stdio.h>
int main()
{
    int ax[50],i,n,largest;
    printf("Enter the array limit: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&ax[i]);

        largest=ax[0];
        for(i=1;i<n;i++){
                if(largest<ax[i])
                largest=ax[i];

    }
    printf("largest number is =%d\n",largest);
}
