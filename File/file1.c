#include<stdio.h>
#include<string.h>
int main()
{
  FILE *fp;
  char filename[]="My file.txt";
  fp=fopen(filename,"w");
  fprintf(fp,"This is a file created by my program!! ");
  fprintf(fp,"I am so happy.\n");
  fclose(fp);
  fp=fopen(filename,"a");
  fprintf(fp," Second line.\n");
  fclose(fp);
}
