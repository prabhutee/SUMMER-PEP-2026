//CIRCULAR LINKED LIST:
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
}
void insertAtEnd(Node* &head,int val)
{
    Node* node=new Node(val);
    if(head==NULL)
    {
        head=node;
        node->next=head;
        return;
    }
    Node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=node;
    node->next=head;
}
void insertAtBeginning(Node* &head,int val)
{
    Node* node=new Node(val);
    if(head==NULL)
    {
        head=node;
        node->next=head;
        return;
    }
    Node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=node;
    node->next=head;
    head=node;
}
void deleteAtEnd(Node* &head)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==head)
    {
        delete head;
        head=NULL;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=head)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=head;
}

void deleteAtBeginning(Node* &head)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==head)
    {
        delete head;
        head=NULL;
        return;
    }
    Node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    Node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
}
void deleteAtPosition(Node* &head,int pos)
{
    if(head==NULL)
    {
        return;
    }
    if(pos==1)
    {
        deleteAtBeginning(head);
        return;
    }
    Node* temp=head;
    for(int i=1;i<pos-1 && temp->next!=head;i++)
    {
        temp=temp->next;
    }
    if(temp->next==head)
    {
        return;
    }
    Node* todelete=temp->next;
    temp->next=todelete->next;
    delete todelete;
}
void display(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    Node* temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}

int main()
{
    Node* head=NULL;
    insertAtEnd(head, 1);
    insertAtBeginning(head, 5);
}
