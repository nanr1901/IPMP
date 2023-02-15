#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node()
    {
        data=0;
        next=NULL;
    }
};

void rev(node* head)
{
    if (head==NULL) return;
    rev(head->next);
    cout<<head->data<<" ";
}
int main()
{
    node* head=new node();
    node *curr=head;
    int n;
    cin>>n;
    while (n--)
    {
        cin>>curr->data;
        if (n!=0)
        {node *temp=new node();
        curr->next=temp;
        curr=curr->next;}
    }
    rev(head);

    return 0;
}