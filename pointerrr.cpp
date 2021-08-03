#include <iostream>
#include<string>
using namespace std;
int linear(int *a,int size,int c)
{
    int index=-1,i;
    for(i=0;i<size;i++)
    {
        if(c==*a)
        {
             index=i;
             break;
        }
        a++;
       
    }
    return index;
}
int main(int argc, char const *argv[])
{
   int a[]={2,6,10,5,14,8};
   int d;
   d=linear(a,sizeof(a)/sizeof(a[0]),100);
   if(d==-1)
   cout<<"-1"<<endl;
   else
   cout<<d<<endl;
    return 0;
}   





