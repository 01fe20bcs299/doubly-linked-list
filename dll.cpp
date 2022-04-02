//swap previous and post to reverse linked list
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *prev;
    node *post;
};
void append(node *&head)
{
    node *temp=new node;
    cout<<"enter data to insert"<<endl;
    cin>>temp->data;
    temp->prev=NULL;
    temp->post=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node *ptr=head;
        while(ptr->post!=NULL)
        {
            ptr=ptr->post;
        }
        ptr->post=temp;
        temp->prev=ptr;
        temp->post=NULL;
    }
}
void print(struct node *&head)
{
node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->post;
    }
}
void rever(node *&head)
{
    node *temp=NULL;
    node *curr=head;
    while(curr!=NULL)
    {
        temp=curr->prev;
        curr->prev=curr->post;
        curr->post=temp;
        curr=curr->prev;
    }
    head=temp->prev;


}
int main()
{
    node *head1=NULL;
    append(head1);
    append(head1);
    append(head1);
    append(head1);
    append(head1);
    append(head1);
    rever(head1);
    print(head1);
}
