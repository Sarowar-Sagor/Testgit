#include<stdio.h>
double sum=0;
struct tri{
    double b,h,a;

}ob1[10];
struct squ{
    double a,area;
}ob2[10];
struct cir{
double area,r;
}ob3[10];

void main()
{
       int i;
    double total_area=0;
    printf("about Triangle..........................\n");
   for(i=0;i<3;i++){
    scanf("%lf %lf",&ob1[i].b,&ob1[i].h);
    ob1[i].a=0.5*ob1[i].b*ob1[i].h;}
     for(i=0;i<3;i++){

        printf("the area of number %d  triangle is %0.3lf\n",i+1,ob1[i].a);}

        printf("about square...........................\n");
        for(i=0;i<3;i++){
            scanf("%lf",&ob2[i].a);
            ob2[i].area=ob2[i].a*ob2[i].a;}
            for(i=0;i<3;i++)
                printf("The area of number %d square is %0.3lf\n",i+1,ob2[i].area);

                printf("about circle.....................\n");
                for(i=0;i<3;i++){
                    scanf("%lf",&ob3[i].r);
                    ob3[i].area=3.14159*ob3[i].r*ob3[i].r;
                }
                for(i=0;i<3;i++)
                    printf("The area of number %d circle is %0.3lf\n",i+1,ob3[i].area);
                    printf("Total area of these triangle,square and circle is....................\n");
                   for(i=0;i<3;i++)
                    total_area+=ob1[i].a+ob2[i].area+ob3[i].area;
                    printf("Total area is %0.3lf",total_area);








}


