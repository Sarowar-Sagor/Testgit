#include<stdio.h>
#include<string.h>
main()
{
    char s[110];
    int l;


    scanf("%s",s);

    l=strlen(s);

    if(l%2!=0)
        printf("Odd.\n");

    else
        printf("Or not.\n");

    return 0;
}

