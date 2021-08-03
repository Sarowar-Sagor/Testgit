#include<stdio.h>
#include<string.h>
char st[100],str[100];
int i;
void summ(int n)
{
    if(n==-1){
        return;
    }
    str[i]=st[n];
    i++;
    summ(n-1);

}
int main()
{
    int n;
    scanf("%s",st);
    n=strlen(st);
    summ(n-1);
   printf("Reverse=%s\n",str);
    return 0;
}
