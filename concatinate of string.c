#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    int i,j;
    printf("Enter a and b string :");
    gets(a);
    gets(b);
    for(i=0,j=0;a[i]!='\0';i++,j++)
        c[j]=a[i];
    for(i=0;b[i]!='\0';i++,j++)
        c[j]=b[i];
   // c[j]='\0';
    printf("the concatenated string is :%s",c);

}
