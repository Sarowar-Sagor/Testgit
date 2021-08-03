#include <iostream>
using namespace std;

int main( )
 {
 int d1, d2;
 int **p;
 cout << "Enter the row and column dimensions of the array:\n";
 cin >> d1 >> d2;
 p=new int*[d1];
 int i, j;
 for (i = 0; i < d1; i++)
 p[i] = new int[d2];
 //m is now a d1 by d2 array.
 cout << "Enter " << d1 << " rows of "<< d2 << " integers each:\n";
 for (i = 0; i < d1; i++)
 for (j = 0; j < d2; j++)
 cin >> p[i][j];

 cout << "Echoing the two-dimensional array:\n";
 for (i = 0; i < d1; i++)
 {
 for (j = 0; j < d2; j++)
 cout << p[i][j] << " ";
 cout << endl;
 }
 for (i = 0; i < d1; i++)
 delete[] p[i];
 delete[] p;

 return 0;
 }
