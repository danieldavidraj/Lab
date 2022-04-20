#include<iostream>
using namespace std;
class Node
{
        public:
        int data;
        Node *next;
        void insertbeg();
        void insertmid(int);
        void insertend();
        void deletebeg();
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
        newnode->next=head;
        head=newnode;
}
void Node::insertmid(int d)
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
        current->next=newnode;
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
        }
}
void Node::deletebeg()
{
        delete []head;
        head=head->next;
}
void Node::deletemid(int d)
{
        Node *current;
        current=head;
        while(current->data != d)
        {
                current=current->next;
        }
        delete []current->next;
        current->next=(current->next)->next;
}
void Node::deleteend()
{
        Node *current,*pre;
        current=head;
        pre=head;
        while(current->next!=NULL)
        {
                pre=current;
                current=current->next;
        }
        delete []current;
        pre->next=NULL;
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
        cout<<"3)Insert a new node at end to the list\n";
        cout<<"4)Delete the first node of the list\n";
        cout<<"5)Delete an existing node which is placed after the node which has the element 'd'\n";
        cout<<"6)Delete the last node of the list\n";
        cout<<"7)Display the elements of the list\n";
        cout<<"8)Exit\n";
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
                a.insertmid(n);
                goto l1;
        }
        else if(n==3)
        {
                a.insertend();
                goto l1;
        }
        else if(n==4)
        {
                a.deletebeg();
                goto l1;
        }
        else if(n==5)
        {
                cout<<"Enter the element d....";
                cin>>n;
                a.deletemid(n);
                goto l1;
        }
        else if(n==6)
        {
                a.deleteend();
                goto l1;
        }
        else if(n==7)
        {
                a.print();
                goto l1;
        }
}



