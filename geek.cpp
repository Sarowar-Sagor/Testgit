#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
void insertbegin(node** hd,int a)
{
    node *p;
    p=new node;
	p->data=a;
    p->next=*hd;
    *hd=p;
}

void insertend(node** hd,int a)
{
    node *p;
	node *q=*hd;
    p=new node;
    p->data=a;
	p->next=NULL;
    if(*hd==NULL)
    {
        *hd=p;
	}
    else
    {
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
    }
}
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        node *head=NULL;
        cin>>c;
        for(int i=0;i<c;i++)
        {
            cin>>a>>b;
            if(b==0)
            {
                insertbegin(&head,a);
            }
            else
            {
                insertend(&head,a);
            }
        }
        while(head!=NULL)
        {
            cout<<head->data<<" ";
            head=head->next;
        }
        cout<<endl;

        
    }

    return 0;
}
