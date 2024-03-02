#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node *pre;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->pre=NULL;
    }
};

void insetAtBeg(Node* &head,int data){
    Node *newnode=new Node(data);
    if(head==NULL){
        head=newnode;
        return;
    }
    newnode->next=head;
    head->pre=newnode;
    head=newnode;
}

void insetAtLast(Node* &head,int data){
    Node* newnode=new Node(data);
    Node* temp;
    if(head==NULL){
        head=newnode;
        return;
    }
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->pre=temp;
}
void insertAtPos(Node* &head,int data,int pos){
    Node* newnode=new Node(data);
    Node*temp = head;
    int i=1;
    if(head==NULL){
        head=newnode;
        return;
    }
    while(i<pos-1){
        temp=temp->next;i++;
    }
    newnode->pre=temp;
    newnode->next=temp->next;
    temp->next=newnode;
}

void printll(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void getLength(Node* head){
    Node* temp=head;
    int cnt=0;
    while (temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    cout<<cnt<<endl;
    
}

int main(){
    Node* head;
    Node* newnode= new Node(10);
    head=newnode;
    newnode->next=new Node(15);
    newnode->next->next=new Node(20);
    newnode->next->next->next=new Node(25);
    printll(head);
    insetAtBeg(head,5);
    printll(head);
    insetAtLast(head,30);
    printll(head);
    insertAtPos(head,17,4);
    printll(head);
    getLength(head);
    
}