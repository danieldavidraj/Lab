#include<iostream>
using namespace std;
class Node
{
        public:
        int data;
        Node *next;
        Node *prev;
        void insertbeg();
        void insertafter(int);
        void insertbefore(int);
        void insertend();
        void deletebeg();
        void deleteafter(int);
        void deletebefore(int);
        void deletemid(int);
        void deleteend();
        void print();
}*head=NULL;
void Node::insertbeg()
{
        Node *newnode;
        newnode=new Node[1];
        cout<<"Enter the data...."<<endl;
        cin>>newnode->data;
        if(head!=NULL)
        {
                head->prev=newnode;
        }
        newnode->next=head;
        newnode->prev=NULL;
        head=newnode;
}
void Node::insertafter(int d)
{
        Node *newnode,*current;
        newnode=new Node[1];
        cout<<"Enter the data....";
        cin>>newnode->data;
        current=head;
        while(current->data != d)
        {
                current=current->next;
        }
        newnode->next=current->next;
        if(head->next!=NULL)
        {
                (current->next)->prev=newnode;
        }
        current->next=newnode;
        newnode->prev=current;
}
void Node::insertbefore(int d)
{
        Node *newnode,*current;
        newnode=new Node[1];
        cout<<"Enter the data....";
        cin>>newnode->data;
        current=head;
        while(current->data != d)
        {
                current=current->next;
        }
        if(current->prev!=NULL)
        {
                (current->prev)->next=newnode;
                newnode->prev=current->prev;
        }
        else
        {
                head=newnode;
        }
        newnode->next=current;
        current->prev=newnode;
}
void Node::insertend()
{
        Node *newnode,*current;
        newnode=new Node[1];
        cout<<"Enter the data...."<<endl;
        cin>>newnode->data;
        newnode->next=NULL;
        if(head==NULL)
        {
                head=newnode;
        }
        else
        {
                current=head;
                while(current->next!=NULL)
                {
                        current=current->next;
                }
                current->next=newnode;
                newnode->prev=current;
        }
}
void Node::deletebeg()
{
        delete []head;
        head=head->next;
}
void Node::deleteafter(int d)
{
        Node *current;
        current=head;
        while(current->data != d)
        {
                current=current->next;
        }
        delete []current->next;
        current->next=(current->next)->next;
        if(current->next!=NULL)
        {
                (current->next)->prev=current;
        }
}
void Node::deletebefore(int d)
{
        Node *current;
        current=head;
        while(current->data != d)
        {
                current=current->next;
        }
        delete []current->prev;
        if( (current->prev)->prev==NULL)
        {
                head=current;
        }
        else
        {
                ((current->prev)->prev)->next=current;
                current->prev=((current->prev)->prev);
        }
}
void Node::deletemid(int d)
{
        Node *current;
        current=head;
        while(current->data != d)
        {
                current=current->next;
        }
        delete []current;
        if(current->prev==NULL)
        {
                head=current->next;
        }
        else if(current->next==NULL)
        {
                (current->prev)->next=NULL;
        }
        else
        {
                (current->prev)->next=current->next;
                (current->next)->prev=current->prev;
        }
}
void Node::deleteend()
{
        Node *current;
        current=head;
        while(current->next!=NULL)
        {
                current=current->next;
        }
        delete []current;
        (current->prev)->next=NULL;
}
void Node::print()
{
        Node *newnode;
        cout<<"\nLinked List:-\n";
        newnode=head;
        while(newnode!=NULL)
        {
                cout<<newnode->data<<"--->";
                newnode=newnode->next;
        }
        cout<<"NULL\n\n";
}
int main()
{
        Node a;
        int i,n;
        l1:cout<<"1)Insert a new node at beginning of  the list\n";
        cout<<"2)Insert a new node after the node which has the element 'd'\n";
        cout<<"3)Insert a new node before the node which has the element 'd'\n";
        cout<<"4)Insert a new node at end to the list\n";
        cout<<"5)Delete the first node of the list\n";
        cout<<"6)Delete an existing node which is placed after the node which has the element 'd'\n";
        cout<<"7)Delete an existing node which is placed before the node which has the element 'd'\n";
        cout<<"8)Delete an existing node which is has the element 'd'\n";
        cout<<"9)Delete the last node of the list\n";
        cout<<"10)Display the elements of the list\n";
        cout<<"11)Exit\n";
        cin>>n;
        if(n==1)
        {
                a.insertbeg();
                goto l1;
        }
        else if(n==2)
        {
                cout<<"Enter the element d....";
                cin>>n;
                a.insertafter(n);
                goto l1;
        }
        else if(n==3)
        {
                cout<<"Enter the element d....";
                cin>>n;
                a.insertbefore(n);
                goto l1;
        }
        else if(n==4)
        {
                a.insertend();
                goto l1;
        }
        else if(n==5)
        {
                a.deletebeg();
                goto l1;
        }
        else if(n==6)
        {
                cout<<"Enter the element d....";
                cin>>n;
                a.deleteafter(n);
                goto l1;
        }
        else if(n==7)
        {
                cout<<"Enter the element d....";
                cin>>n;
                a.deletebefore(n);
                goto l1;
        }
        else if(n==8)
        {
                cout<<"Enter the element d....";
                cin>>n;
                a.deletemid(n);
                goto l1;
        }
        else if(n==9)
        {
                a.deleteend();
                goto l1;
        }
        else if(n==10)
        {
                a.print();
                goto l1;
        }
}
