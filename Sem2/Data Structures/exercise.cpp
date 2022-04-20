
#include<iostream>
using namespace std;
class Node
{
        int data;
        Node *next;
        public:
        Node* insert(Node*);
        void print(Node*);
        Node* concat();
        Node* Delete(Node*);
}*head1=NULL,*head2=NULL,*head3=NULL;
Node* Node::insert(Node *head)
{
        int n;
        cout<<"Enter number of nodes.....";
        cin>>n;
        for(int i=0;i<n;i++)
        {
                Node *newnode,*current;
                newnode=new Node[1];
                cout<<"Enter the data.....";
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
        return head;
}
void Node::print(Node *head)
{
        Node *current;
        current=head;
        cout<<"\nLinked List:-\n";
        while(current!=NULL)
        {
                cout<< current->data << "-->";
                current=current->next;
        }
        cout<<"NULL\n\n";
}
Node* Node::concat()
{
        Node *newnode,*current1,*current;
        current1=head1;
        while(current1!=NULL)
        {
                newnode=new Node[1];
                newnode->data=current1->data;
                newnode->next=NULL;
                if(head3==NULL)
                {
                      head3=newnode;
                      current=head3;
                }
                else
                {
                        current->next=newnode;
                        current=newnode;

                }
                current1=current1->next;
        }
        current=head3;
        while(current->next!=NULL)
        {
                current=current->next;
        }
        current1=head2;
        while(current1!=NULL)
        {
                newnode=new Node[1];
                newnode->data=current1->data;
                newnode->next=NULL;
                current->next=newnode;
                current=newnode;
                current1=current1->next;
        }
        return head3;
}
Node* Node::Delete(Node *head)
{
        Node *current,*prev;
        current=head;
        while(current!=NULL)
        {
                prev=current;
                current=current->next;
                delete []prev;
        }
        return head;
}
int main()
{
        cout<<"\t\t1)Append an element to the end of a list\n";
        cout<<"\t\t2)Concatenate two lists\n";
        cout<<"\t\t3)Free all the nodes in a list\n";
        cout<<"\t\t4)Reverse a list, so that the last element becomes the first, and so on.\n";
        cout<<"\t\t5)Delete the last element from a list\n";
        cout<<"\t\t6)Delete the nth element from a list\n";
        cout<<"\t\t7)Combine two ordered lists into a single ordered list\n";
        cout<<"\t\t8)Form a list containing the union of the elements of two lists\n";
        cout<<"\t\t9)Form a list containing the intersection of the elements of two lists\n";
        cout<<"\t\t10)Insert an element after the nth element of a list\n";
        cout<<"\t\t11)Delete every second element from a list\n";
        cout<<"\t\t12)Place the elements of a list in increasing order\n";
        cout<<"\t\t13)Return the sum of the integers in a list\n";
        cout<<"\t\t14)Return the number of elements in a list\n";
        cout<<"\t\t15)Move node(p) forward n positions in a list\n";
        cout<<"\t\t16)Make a second copy of a list\n";
        cout<<"\t\t17)Print\n";
        Node a;
        int n;
        l1:cout<<"Enter your choice.....\n";
        cin>>n;
        if(n==1)
        {
                cout<<"Enter number of list.....";
                cin>>n;
                if(n==1)
                {
                        head1=a.insert(head1);
                }
                else if(n==2)
                {
                        head2=a.insert(head2);
                }
                goto l1;
        }
        else if(n==2)
        {
                Node *head3;
                head3=a.concat();
                a.print(head3);
        }
        else if(n==3)
        {
                cout<<"Enter number of list.....";
                cin>>n;
                if(n==1)
                {
                        head1=a.Delete(head1);
                }
                else if(n==2)
                {
                        head2=a.Delete(head2);
                }
                goto l1;
        }
        else if(n==17)
        {
                a.print(head1);
                a.print(head2);
                goto l1;
        }
}


