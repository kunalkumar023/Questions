#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next = NULL;
    }
};

void insetAtBeg(Node* &head,int data){
    Node* newnode=new Node(data);
    if(head==NULL){
        head=newnode;
        return;
    }
    cout<<"accessed "<<endl;
    newnode->next=head;
    head=newnode;
    
}

void insetAtEnd(Node* &head,int data){
    Node* newnode=new Node(data);
    if(head==NULL){
        head=newnode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;

}

void inserAtPos(Node* &head,int data,int pos){
    Node* newnode=new Node(data);
    Node* temp=head;
    int i=1;
    cout<<"entered"<<endl;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    // cout<<w
    newnode->next=temp->next;
    temp->next=newnode;
}
void printll(Node* &head){
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
    
    
}

Node* kreverse(Node * &head,int k){
    Node* pre=NULL;
    Node* curr=head;
    Node* agla=NULL;
    int count=0;
    while(curr !=NULL && count<k){
        agla = curr->next;
        curr->next=pre;
        pre=curr;
        curr=agla;
        count++;
    }  
    if(agla!=NULL){
        head->next=kreverse(agla,k);
    }
    return pre;
}
int main(){
    Node *head=NULL;
    insetAtBeg(head,15);
    insetAtBeg(head,10);
    insetAtBeg(head,5);
    insetAtEnd(head,20);
    insetAtEnd(head,25);
    inserAtPos(head,12,3);
    printll(head);
    cout<<endl;
    head=kreverse(head,3);
    printll(head);
}






