#include<bits/stdc++.h>
#include<ctime>
using namespace std;
void fn(int x,int n)
{
    x=n*2;
}
int main()
{
    int i,j,x,n;
     clock_t start,end;
     double diff;
     start=clock();
     n=12345;
     for(i=0;i<1000;i++)
     {
         for(j=0;j<10;j++)
         {
             x=n*2;
         }
     }
     end=clock();
     diff=(double)(end-start)/CLOCKS_PER_SEC;
     cout.precision(4);
     cout<<fixed<<"Time = "<<diff<<"seconds"<<endl;
     start=clock();
     n=12378;
     for(i=0;i<1000000000;i++)
     {
         for(j=0;j<10;j++)
         {
             fn(x,n);
         }
     }
     end=clock();
     diff=(double)(end-start)/CLOCKS_PER_SEC;
     cout<<fixed<<"Time = "<<diff<<"seconds"<<endl;


    return 0;
}

