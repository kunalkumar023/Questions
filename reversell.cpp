#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

void printll(Node *head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

void reversell(Node *&head){
    Node * curr,*pre=NULL,*agla;
    curr=head;
    do{
    agla=curr->next;
    curr->next=pre;
    pre=curr;
    curr=agla;
    // cout<<"HI";
    }while(curr!=NULL);
    head=pre;

}
int main(){
    Node* head;
    Node * newnode=new Node(10);
    head=newnode;
    newnode->next=new Node(20);
    newnode->next->next=new Node(30);
    newnode->next->next->next=new Node(40);
    printll(head);
    reversell(head);
    printll(head);
}