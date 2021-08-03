 #include<stdio.h>
 int add(int a[],int n);
 int main()
 {
     int num[10],i,n;
     printf("Enter total number=");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
       printf("Enter the number%d:",i+1) ;
       scanf("%d",&num[i]);
         }
         printf("result=%d",add(num,n));


 }
 int add(int a[],int n)
 {
    int temp=0,i;
    for(i=0;i<n;i++)
        temp+=a[i];
    return (temp);
 }
