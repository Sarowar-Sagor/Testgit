   #include<stdio.h>
int main()
{
    long long int a,d,e,f,g,h,i,j;
    scanf("%lld",&a);
    d=a/100;
    e=(a-(d*100))/50;
    f=(a-(d*100+e*50))/20;
    g=(a-(d*100+e*50+f*20))/10;
    h=(a-(d*100+e*50+f*20+g*10))/5;
    i=(a-(d*100+e*50+f*20+g*10+h*5))/2;
    j=(a-(d*100+e*50+f*20+g*10+h*5+i*2));
    printf("%lld\n%lld nota(s) de R$ 100,00\n%lld nota(s) de R$ 50,00\n%lld nota(s) de R$ 20,00\n%lld nota(s) de R$ 10,00\n%lld nota(s) de R$ 5,00\n%lld nota(s) de R$ 2,00\n%lld nota(s) de R$ 1,00\n",a,d,e,f,g,h,i,j);
}
