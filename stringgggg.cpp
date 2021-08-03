#include <bits/stdc++.h>
#include <string>
using namespace std;
 int main( )
 {
 string st,str;
 cin>>st;
 int a=st.find("g");
 cout<<st.length()<<" "<<a<<endl;
 st.insert(0,"sarowar ");
 cout<<st<<endl;
 st.erase(0,8);
 cout<<st<<endl;
 return 0;
 }
