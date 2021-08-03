#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,a n,number[30000],k;
   cout<<"Size of the array\n";
   cin>>n;
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);
    for (i = 0; i < n; ++i)
    {
        for (j =0; j <n-i-1; ++j)
        {
            if (number[j] > number[j+1])
            {
                a =  number[j];
                number[j] = number[j+1];
                number[j+1] = a;
			}
		}
	}
    printf("The numbers arranged in ascending order are given below \n");
    for (j = 0; j < n; ++j)
        printf("%d\n", number[j]);
        return 0;


}






















