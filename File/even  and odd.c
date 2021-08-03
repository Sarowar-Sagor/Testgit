#include<stdio.h>
int main()
{
 int i, n, a[100];
 FILE *fp, *even,*odd;
 fp = fopen("e & o.txt","r");
even=fopen("even.txt","w");
odd=fopen("odd.txt","w");
printf("How many numbers: ");
scanf("%d", &n);
for(i=0; i<n; i++)
 fscanf(fp, "%d", &a[i]);
 for(i=0; i<n; i++)
    if(a[i]%2==0)
  fprintf(even, "%d ", a[i]);
 else
    fprintf(odd,"%d ",a[i]);
  /*for(i=0;i<n;i++)
    printf("%d\n",a[i]);*/
  fclose(fp);
  fclose(even);
 fclose(odd);
   return 0;
 }

