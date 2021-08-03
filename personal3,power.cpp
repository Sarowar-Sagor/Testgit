
#include<stdio.h>
#include<math.h>
main()
{
    int a,n,s;
    s=0;
    printf("Enter the number of N:");
    scanf("%d",&n);
    for(a=1;a<=n;a++)
    {
        s=s+pow(a,2);
    }
    printf("Sum=%d",s);
    return 0;




}
