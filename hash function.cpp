#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* ar[100];
node *p;
void print(int i)
{
    for(int j=0; j<i; j++)
    {
        cout<<j<<":";
        p=ar[j];
        while(p!=0)
        {
            cout<<"->"<<p->data;
            p=p->next;
        }
        cout<<endl;
    }

}
int main()
{
    int k,n,a,i,rem;
    cout<<"Enter memory location\n";
    cin>>k;
    for(i=0; i<k; i++)
    {
        cout<<"Enter value\n";
        cin>>a;
        rem=a%k;
        p=new node;
        p->data=a;
        p->next=ar[rem];
        ar[rem]=p;

    }
    print(k);
    return 0;
}
