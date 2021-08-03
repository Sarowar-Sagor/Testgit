#include<bits/stdc++.h>
#include<vector>
using namespace std;
int fact(int n)
{
    int temp=1,i;
    for(i=2;i<=n;i++)
    {
        temp*=i;
    }
    return temp;
}
double p_calf(double p,int i)
{
    double temp=p;
    int k=0;
    for(int j=1;j<i;j++)
    {
        if(j%2==1)
        {
            k++;
            temp*=(p-k);
        }
        else
        {
            temp*=(p+k);
        }
    }
    return temp;
}

int main()
{
    int i,j,n=7,index=0;
    double y[50][50],x[50],p,val;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i][0];
    }
    double h=x[1]-x[0];
    double sum=0;
    cout<<"give the value you want to calculate\n";
    cin>>val;
    for(i=0;i<n-1;i++)
    {
        if(val>=x[i] && val<=x[i+1])
        {
            if(val-x[i]<=x[i+1]-val)
            {
                sum=y[i][0];
                index=i;
            }
            else
            {
                sum=y[i+1][0];
                index=i+1;
            }
            break;
        }
    }
    p=(val-x[index])/h;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            y[j][i]=y[j+1][i-1]-y[j][i-1];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            cout<<y[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=1;i<n;i++)
    {
        if(i%2==0)
        {
            index--;
        }
        sum+=((p_calf(p,i)*y[index][i]))/fact(i);
    }
    cout<<"the sum is "<<sum<<endl;


    return 0;
}
