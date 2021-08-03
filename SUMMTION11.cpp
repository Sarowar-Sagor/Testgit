#include<iostream>
#include<cmath>
using namespace std;
int i=0,j=0,n=0,L=0,U=0,a=0,d=0,r=0,temp=0;
int main()
{
    long sv[1000],sv1[100][100];
    long T[1000];
    int option;
    {
    cout<<"Please enter your option:";
    cout<<"1.SUM(a+nd)"<<"\n";
    cout<<"2.SUM (ar^j)"<<"\n";
    cout<<"3.SUM (i+j)"<<"\n";
    cout<<"Express Your Option:";
    cin>>option;
    if(option==1)
    {
        sv[0]=a;
        cout<<"Lower Limit:";
        cin>>L;
        cout<<"Upper Limit:";
        cin>>U;
        cout<<"Here value for a=";
        cin>>a;
         cout<<"Here value for d=";
        cin>>d;
        T[n-1]=0;
        for(n=L;n<=U;n++)
        {
            T[n]=T[n-1]+n*d;
            sv[n]=a+T[n];
            cout<<"Value for n="<<n<<",is="<<sv[n]<<"\n";
        }
        cout<<"\n";
        cout<<"RESAULT Is:"<<sv[U]<<endl;
        cout<<"Lower Limit:";
        cin>>L;
        cout<<"Upper Limit:";
        cin>>U;
        cout<<"Here value for a=";
        cin>>a;
         cout<<"Here value for r=";
        cin>>r;
        sv[j-1]=0;
        for(j=L;j<=U;j++)
        {
            sv[j]=sv[j-1]+(a*(pow(r,j)));
            cout<<"For j="<<j<<",is="<<sv[j]<<"\n";
        }
        cout<<"\n";
        cout<<"RESULT Is:"<<sv[U]<<"\n";

    }
    else if(option==3)
    {
        cout<<"Lower Limit:";
        cin>>L;
        cout<<"Upper Limit:";
        cin>>U;
        temp=0;
        for(i=L;i<=U;i++)
        {
            for(j=L;j<=U;j++)
            {
            sv1[i][j]=temp+i+j;
            temp=sv1[i][j];
            cout<<sv1[i][j]<<"\n";
        }

    }}
    else{
        cout<<"Incorrect input"<<"\n";
//        break;
    }
   // break;
    }
    return 0;
}

