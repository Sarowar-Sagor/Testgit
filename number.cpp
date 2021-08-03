#include<stdio.h>
#include<conio.h>
      main()

    {
        int a,b,c;
        printf("enter 3 integers value:");
        scanf("%d %d %d",&a,&b,&c);
        if((a>b)&& (a>c))
        printf("largest value is:%d",a);
        else if((b>a)&&(b>c))
            printf("largest value is:%d",b);
         else
            printf("largest value is:%d",c);
         getch();

    }
