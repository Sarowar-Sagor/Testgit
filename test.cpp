/**Author:Sagor
//Date:04/05/2019*/
#include<bits/stdc++.h>

using namespace std;

#define pi acos(-1)
#define ll long long
string st;

int main()
{
   char c,ch,chr,s;
   int n,i,max=0;
   cin>>n>>st;
   for(int i=0;i<n-1;i++)
   {
       c=st[i];
       ch=st[i+1];
       int cnt=0;
       for(int j=0;j<n-1;j++)
       {
           if(st[j]==c && st[j+1]==ch)
           {
               cnt++;
           }
       }
       if(max<cnt)
       {
           max=cnt;
           chr=c;
           s=ch;
       }
   }
   cout<<chr<<s<<"\n";
    return 0;
}
