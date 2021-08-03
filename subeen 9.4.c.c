#include<stdio.h>
#include<string.h>
int main()
{
    char country[]={'B','A','N','G','L','A','D','E','S','H','\0'};
    int i;
    for(i=0;i<11;i++){
        if(country[i]>='A'  && country[i]<='Z')
    country[i]='a'+country[i]-'A';}

    printf("%s\n",country);
}

