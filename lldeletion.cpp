#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void deleteAtBeg(Node* &head){
    Node* temp=head;
    if(head==NULL){
        cout<<"Linked list is empty"<<endl;
    }
    else{
        head=head->next;
    }
    free(temp);
}

void deleteAtLast(Node* &head){
    Node *temp1,*temp2;
    temp1=head;
    while(temp1->next!=NULL){
        temp2=temp1;
        temp1=temp1->next;
    }
    temp2->next=NULL;
    delete temp1;
    cout<<temp1->data<<endl;
}

void deleteAtPos(Node * &head,int pos){
    Node *temp1=head,*temp2;int i=1;
    if(head==NULL){
        cout<<"Linkedlist is empty"<<endl;
    }
    else{
        while(i<pos){
            temp2=temp1;
            temp1=temp1->next;
            i++;
        }
    }
    temp2->next=temp1->next;
    temp1->next=NULL;
    delete temp1;
}
void printll(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node *head;
    Node *newnode= new Node(10);
    head=newnode;
    newnode->next=new Node(15);
    newnode->next->next=new Node(20);
    newnode->next->next->next=new Node(25);
    printll(head);
    deleteAtBeg(head);
    printll(head);
    // deleteAtLast(head);
    // printll(head);
    deleteAtPos(head,3);
    printll(head);
}
