#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data,Node *head){
        this->data=data;
        this->next=head;
    }
};

void insertArBeg(Node* head,Node* tail,int data){
    Node* newnode=new Node(data,head);
    if(head==NULL){
        cout<<"inside"<<endl;
        head=tail=newnode;
        cout<<newnode->data<<endl;
        cout<<head->data<<endl;
        cout<<"inside2"<<endl;
        
    }
    else{
    cout<<"3"<<endl;
    newnode->next=head;
    head=newnode;
    tail->next=head;}

}

void printll(Node* head){
    Node* temp=head;
    do
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    } while (temp->next!=head);
    
}

int main(){

    Node* head=NULL,*tail=NULL;
    insertArBeg(head,tail,5);
    // printll(head);
    cout<<head->data<<endl;
}