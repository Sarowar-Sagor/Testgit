#include<stdio.h>
union u{
char *ch;
int x,y;
}uv;
int main()
{
    uv.ch="A";
    printf("uv.ch=%c\n",uv.ch);

     printf("uv.x=%d\n",uv.x);
     printf("uv.ch=%c\n",uv.ch);
     uv.x=17;
     uv.y=18;
      printf("uv.y=%d\n",uv.y);
       //printf("uv.ch=%c\n",uv.ch);
        printf("uv.x=%d\n",uv.x);


}
