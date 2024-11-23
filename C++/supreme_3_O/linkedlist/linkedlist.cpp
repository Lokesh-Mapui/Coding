#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructer
    node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

node *insertathead(int value, node *&head, node *&tail)
{
    if(head==NULL&&tail==NULL){
        // ll is empty
      // create a new node
    node *newnode = new node(value);
    // head ko node par laga do
    head=newnode;
    // tail ko new node par laga do
    tail=newnode;
    }
    else{
        // ll is not empty
        // insert at head
        // step 1 : create a node
        node*newnode= new node(value);
        // step 2 : connect this new node to head node
        newnode->next=head;
        // headd updTE kar do
        head=newnode;
    }
    return head;
}

node*insertattail(int value,node*&head,node*&tail){
    // ll is empty
    if(head==NULL&&tail==NULL){
        node* newnode=new node(value);
        head=newnode;
        tail=newnode;
    }
    else{
        // insert karne se pehele node create karna padega
        node*newnode=new node(value);
        tail->next=newnode;
        tail=newnode;
    }
    return head;
}

node* insertatpos(int value,int pos,node*&head,node*&tail){
    int len=getlength(head);
    if(pos==1){
        head=insertathead(value,head,tail);
    }
    else if(pos==len+1){
        insertattail(value,head,tail);
    }
    else{
        
    }
}

void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int getlength(node*head){
    int len=0;
    node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}

int main()
{
    node* head=NULL;
    node*tail=NULL;

head=insertattail(101,head,tail);
print(head);
head=insertattail(102,head,tail);
print(head);
head=insertattail(103,head,tail);
print(head);




    // head=insertathead(10,head,tail);
    // head=insertathead(20,head,tail);
    // head=insertathead(30,head,tail);

    // print(head);
    // head=insertattail(210,head,tail);
    // print(head);

    // node *first = new node(10);
    return 0;
}