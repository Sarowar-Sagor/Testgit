#include<stdio.h>
int main()
{
    FILE *fp,*fpp;
    int a,b,sum;
    char line[80];

   /* char *input_file="in.txt";
    char *output_file="Sum.txt";
    fp=fopen(input_file,"r");
    fpp=fopen(output_file,"w");*/
    fp=fopen("in.txt","r");
    fpp=fopen("Sum.txt","w");
    fgets(line,80,fp);
    printf("Line: %s\n",line);
    sscanf(line,"%d%d",&a,&b);
    sum=a+b;
    printf("%d+%d=%d",a,b,sum);
    fprintf(fpp,"%d\n",sum);
    fclose(fp);
    fclose(fpp);
}
