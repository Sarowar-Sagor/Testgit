#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    switch (a){
    case 1:printf("alpha\n");
    case 2:printf("beta\n");
    case 3:printf("gama");break;
    default :
        printf("other");

    }

   return 0;
}

